#include <stdio.h>
#include <stdlib.h>
#include <uv.h>

#ifdef HAVE_LLHTTP
#include "llhttp.h"
#endif

#define DEFAULT_PORT 7000
#define DEFAULT_BACKLOG 128

uv_loop_t *loop;
struct sockaddr_in addr;

static const char mock_response[] =
        "HTTP/1.1 200 OK\r\n"
        "Connection: close\r\n"
        "Content-Length: 194\r\n"
        "\r\n"
        "<html><head></head><body>HENLO WORLD<br><img src=\"https://www.alphapaw.com/wp-content/uploads/2021/01/Golden-Retriever-Meme-Another-movie-night-in-my-pjs-enjoying-my-pup-corn.jpg\"></body></html>";

typedef struct {
    uv_write_t req;
    uv_buf_t buf;
    uv_stream_t* stream;
    int close_after;
} write_req_t;

#ifdef HAVE_LLHTTP
typedef struct {
    llhttp_t parser;
    llhttp_settings_t settings;
    uv_tcp_t* client;
    int message_complete;
} http_conn_t;

static void send_response_and_maybe_close(http_conn_t* ctx);
static int on_message_complete_cb(llhttp_t* p) {
    http_conn_t* ctx = (http_conn_t*)p->data;
    ctx->message_complete = 1;
    send_response_and_maybe_close(ctx);
    return 0;
}
#endif

void free_write_req(uv_write_t *req) {
    write_req_t *wr = (write_req_t*) req;
    // The buffer contains static data; do not free wr->buf.base here.
    if (wr->close_after && wr->stream) {
        uv_close((uv_handle_t*)wr->stream, NULL);
    }
    free(wr);
}

void alloc_buffer(uv_handle_t *handle, size_t suggested_size, uv_buf_t *buf) {
    buf->base = (char*) malloc(suggested_size);
    buf->len = suggested_size;
    (void)handle;
}

void on_close(uv_handle_t* handle) {
#ifdef HAVE_LLHTTP
    http_conn_t* ctx = (http_conn_t*)handle->data;
    free(ctx);
#endif
    free(handle);
}

void echo_write(uv_write_t *req, int status) {
    if (status) {
        fprintf(stderr, "Write error %s\n", uv_strerror(status));
    }
    free_write_req(req);
}

void echo_read(uv_stream_t *client, ssize_t nread, const uv_buf_t *buf) {
#ifdef HAVE_LLHTTP
    http_conn_t* ctx = (http_conn_t*)client->data;
#endif
    if (nread > 0) {
#ifdef HAVE_LLHTTP
        llhttp_errno_t err = llhttp_execute(&ctx->parser, buf->base, (size_t)nread);
        free(buf->base);
        if (err != HPE_OK) {
            fprintf(stderr, "HTTP parse error: %s (%s)\n", llhttp_errno_name(err), llhttp_get_error_reason(&ctx->parser));
            uv_close((uv_handle_t*)client, on_close);
        }
        return;
#else
        // Without llhttp, just respond immediately to any data
        write_req_t* req = (write_req_t*) malloc(sizeof(write_req_t));
        req->buf = uv_buf_init((char*)mock_response, (unsigned int)(sizeof(mock_response) - 1));
        req->stream = client;
        req->close_after = 1;
        uv_write((uv_write_t*) req, client, &req->buf, 1, echo_write);
        free(buf->base);
        return;
#endif
    }

    if (buf && buf->base) free(buf->base);

    if (nread == UV_EOF) {
        uv_close((uv_handle_t*)client, on_close);
    } else if (nread < 0) {
        fprintf(stderr, "Read error: %s\n", uv_strerror((int)nread));
        uv_close((uv_handle_t*)client, on_close);
    }
}

#ifdef HAVE_LLHTTP
static void send_response_and_maybe_close(http_conn_t* ctx) {
    write_req_t* req = (write_req_t*) malloc(sizeof(write_req_t));
    req->buf = uv_buf_init((char*)mock_response, (unsigned int)(sizeof(mock_response) - 1));
    req->stream = (uv_stream_t*)ctx->client;
    req->close_after = 1; // close after sending
    uv_write((uv_write_t*) req, (uv_stream_t*) ctx->client, &req->buf, 1, echo_write);
}
#endif

void on_new_connection(uv_stream_t *server, int status) {
    if (status < 0) {
        fprintf(stderr, "New connection error %s\n", uv_strerror(status));
        // error!
        return;
    }

    uv_tcp_t *client = (uv_tcp_t*) malloc(sizeof(uv_tcp_t));
    uv_tcp_init(loop, client);
#ifdef HAVE_LLHTTP
    http_conn_t* ctx = (http_conn_t*)calloc(1, sizeof(http_conn_t));
    client->data = ctx;
    ctx->client = client;
    llhttp_settings_init(&ctx->settings);
    ctx->settings.on_message_complete = on_message_complete_cb;
    llhttp_init(&ctx->parser, HTTP_REQUEST, &ctx->settings);
    ctx->parser.data = ctx;
#endif
    if (uv_accept(server, (uv_stream_t*) client) == 0) {
        uv_read_start((uv_stream_t*) client, alloc_buffer, echo_read);
    }
    else {
        uv_close((uv_handle_t*) client, on_close);
    }
}

int main() {
    loop = uv_default_loop();

    uv_tcp_t server;
    uv_tcp_init(loop, &server);

    uv_ip4_addr("0.0.0.0", DEFAULT_PORT, &addr);

    uv_tcp_bind(&server, (const struct sockaddr*)&addr, 0);
    int r = uv_listen((uv_stream_t*) &server, DEFAULT_BACKLOG, on_new_connection);
    if (r) {
        fprintf(stderr, "Listen error %s\n", uv_strerror(r));
        return 1;
    }
    return uv_run(loop, UV_RUN_DEFAULT);
}

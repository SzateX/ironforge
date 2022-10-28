#include <stdio.h>
#include <stdlib.h>
#include <uv.h>
#include "httpparser.h"

#define DEFAULT_PORT 7000
#define DEFAULT_BACKLOG 128

uv_loop_t *loop;
struct sockaddr_in addr;

typedef struct {
    uv_write_t req;
    uv_buf_t buf;
} write_req_t;

void free_write_req(uv_write_t *req) {
    write_req_t *wr = (write_req_t*) req;
    free(wr->buf.base);
    free(wr);
}

void alloc_buffer(uv_handle_t *handle, size_t suggested_size, uv_buf_t *buf) {
    buf->base = (char*) malloc(suggested_size);
    buf->len = suggested_size;
}

void on_close(uv_handle_t* handle) {
    free(handle);
}

void echo_write(uv_write_t *req, int status) {
    if (status) {
        fprintf(stderr, "Write error %s\n", uv_strerror(status));
    }
    free_write_req(req);
}

void echo_read(uv_stream_t *client, ssize_t nread, const uv_buf_t *buf) {
    printf("ECHO READ START\n");
    http_request http_request;
    http_parser_parse(buf->base, buf->len, &http_request);
    printf("Method: %.*s\n", http_request.method_length, http_request.method);
    printf("Request Target: %.*s\n", http_request.target_length, http_request.target);
    printf("Http Version: %d.%d\n", http_request.http_version.major, http_request.http_version.minor);

    printf("\nHeaders (%d):\n", http_request.http_headers_count);
    for(int i =0 ; i < http_request.http_headers_count; i++)
    {
        printf("(%d) Header Name: %.*s\t", i, http_request.http_headers[i].header_name_length, http_request.http_headers[i].header_name);
        printf("Header Value: %.*s\n", http_request.http_headers[i].header_value_length, http_request.http_headers[i].header_value);
    }
    printf("\n\n\n");
    for(int i = 0; i < buf->len; i++)
    {
        printf("%c", buf->base[i]);
    }

    printf("\nECHO READ END\n");
}

void on_new_connection(uv_stream_t *server, int status) {
    if (status < 0) {
        fprintf(stderr, "New connection error %s\n", uv_strerror(status));
        // error!
        return;
    }

    uv_tcp_t *client = (uv_tcp_t*) malloc(sizeof(uv_tcp_t));
    uv_tcp_init(loop, client);
    if (uv_accept(server, (uv_stream_t*) client) == 0) {
        uv_read_start((uv_stream_t*) client, alloc_buffer, echo_read);
    }
    else {
        uv_close((uv_handle_t*) client, on_close);
    }
}

int main() {
    http_parser_init();
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

cmake_minimum_required(VERSION 3.21)
project(ironforge)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_C_STANDARD 23)

if(POLICY CMP0135)
    cmake_policy(SET CMP0135 NEW)
endif()

include(FetchContent)
set(FETCHCONTENT_UPDATES_DISCONNECTED ON)

set(LLHTTP_VER "release/v9.3.0")
set(UV_VER "v1.51.0")

set(LLHTTP_BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)
set(LLHTTP_BUILD_STATIC_LIBS ON  CACHE BOOL "" FORCE)

FetchContent_Declare(llhttp
        URL "https://github.com/nodejs/llhttp/archive/refs/tags/${LLHTTP_VER}.tar.gz"
        DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(llhttp)

set(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)
set(LIBUV_BUILD_TESTS  OFF CACHE BOOL "" FORCE)
set(LIBUV_BUILD_BENCH  OFF CACHE BOOL "" FORCE)

FetchContent_Declare(libuv
        URL "https://dist.libuv.org/dist/${UV_VER}/libuv-${UV_VER}.tar.gz"
        DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(libuv)

add_executable(ironforge main.c)
target_link_libraries(ironforge PRIVATE libuv::libuv llhttp::llhttp)

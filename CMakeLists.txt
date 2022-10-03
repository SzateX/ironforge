cmake_minimum_required(VERSION 3.21)
project(ironforge)
set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_C_STANDARD 23)
set(ironforge-include dependencies/libuv/include httpparser/include)

include_directories(${ironforge-include})

add_subdirectory(dependencies/libuv)
add_subdirectory(httpparser)

add_executable(ironforge main.c)

target_link_libraries(ironforge uv_a httpparser)

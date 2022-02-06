cmake_minimum_required(VERSION 3.16)
project(ironforge C)

set(CMAKE_C_STANDARD 11)
set(ironforge-include httpparser dependencies/libuv/include dependencies/apg-7.0/library dependencies/apg-7.0/utilities)

include_directories(${ironforge-include})

add_subdirectory(dependencies/libuv)

aux_source_directory(dependencies/apg-7.0/library DIR_LIBRARY)
add_library(library STATIC ${DIR_LIBRARY})

aux_source_directory(dependencies/apg-7.0/utilities DIR_UTILITIES)
add_library(utilities STATIC ${DIR_UTILITIES})

aux_source_directory(httpparser PARSER_SOURCES)

add_executable(ironforge main.c ${PARSER_SOURCES})

target_link_libraries(ironforge library utilities uv_a)

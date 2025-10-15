cmake_minimum_required(VERSION 3.21)
project(ironforge)
set(CMAKE_VERBOSE_MAKEFILE ON)

set(CMAKE_C_STANDARD 23)
set(ironforge-include dependencies/libuv/include)

include_directories(${ironforge-include})

add_subdirectory(dependencies/libuv)

add_executable(ironforge main.c)

target_link_libraries(ironforge uv_a)

# Try to integrate llhttp if the submodule is present
set(LLHTTP_DIR ${CMAKE_SOURCE_DIR}/dependencies/llhttp)
if(EXISTS "${LLHTTP_DIR}/include/llhttp.h")
    message(STATUS "llhttp found at ${LLHTTP_DIR}")
    add_library(llhttp STATIC
        ${LLHTTP_DIR}/src/api.c
        ${LLHTTP_DIR}/src/llhttp.c
    )
    target_include_directories(llhttp PUBLIC ${LLHTTP_DIR}/include)
    target_link_libraries(ironforge PRIVATE llhttp)
    target_compile_definitions(ironforge PRIVATE HAVE_LLHTTP=1)
else()
    message(WARNING "llhttp submodule not found; building without HTTP parsing")
endif()

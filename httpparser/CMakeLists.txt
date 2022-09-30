cmake_minimum_required(VERSION 3.21)
project(httpparser CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(httpparser-generated_src
        ${PROJECT_SOURCE_DIR}/generated/httpBaseVisitor.cpp
        ${PROJECT_SOURCE_DIR}/generated/httpVisitor.cpp
        ${PROJECT_SOURCE_DIR}/generated/httpLexer.cpp
        ${PROJECT_SOURCE_DIR}/generated/httpParser.cpp
        )

set(httpparser-src ${PROJECT_SOURCE_DIR}/src/HttpParserVisitor.cpp src/httpParserInterface.cpp)

add_subdirectory(antlr4-cpp-runtime-4.9.3-source)
#find_package(antlr4-runtime REQUIRED)

# set(httparser-src)
add_library(httpparser STATIC ${httpparser-generated_src} ${httpparser-src})
#add_dependencies( httpparser antlr4_share d )
target_include_directories(httpparser
        PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
        PRIVATE $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/generated>
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/antlr4-cpp-runtime-4.9.3-source/runtime/src>
        )
target_link_libraries(httpparser antlr4_static)


cmake_minimum_required(VERSION 3.19)
project(xor-crypto-lib)

set(CMAKE_CXX_STANDARD 20)

if (NOT ${RUN_TEST})
    add_compile_definitions(TEST_RUNNING)
endif ()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -ltbb -lprocps")

add_executable(test main.cpp)
cmake_minimum_required(VERSION 3.13)
project(test_catch_framework)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SRCS src/*.cpp)
add_executable(test_catch_framework ${SRCS})


add_subdirectory(testsuites)
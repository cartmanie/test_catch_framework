cmake_minimum_required(VERSION 3.13)
project(test_catch_framework)

set(CMAKE_CXX_STANDARD 17)

add_executable(test_catch_framework Foo.cpp Foo.h Bar.cpp Bar.h main.cpp)


add_subdirectory(testsuites)
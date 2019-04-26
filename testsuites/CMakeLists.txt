cmake_minimum_required(VERSION 3.13)
project(testsuites)

set(CMAKE_CXX_STANDARD 17)
file(GLOB SRCS *.cpp)
file(GLOB TARGET_SRCS ../*.cpp)
file(GLOB REMOVE_SRCS ../main.cpp)
MESSAGE("111111--------------")
message(${TARGET_SRCS})
list(REMOVE_ITEM TARGET_SRCS ${REMOVE_SRCS})
MESSAGE("222222--------------")
message(${TARGET_SRCS})
list(APPEND SRCS ${TARGET_SRCS})

add_executable(testsuites ${SRCS})



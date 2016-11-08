cmake_minimum_required(VERSION 3.6)
project(IPC_MS1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES banking.c)
add_executable(C ${SOURCE_FILES})
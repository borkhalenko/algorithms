cmake_minimum_required(VERSION 2.8.12)
project(Algorithms)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11")
set(HEADERS_DIR ./headers/)
include_directories(${HEADERS_DIR})
FILE(GLOB SRC_FILES "./cpp/*.cpp")
add_executable(Algorithms main.cpp ${SRC_FILES})
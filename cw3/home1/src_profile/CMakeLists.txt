cmake_minimum_required(VERSION 3.6)
project(src_profile)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    heap.cpp
    heap.h
    heapproject.cpp
    infoelement.cpp
    infoelement.h)

add_executable(src_profile ${SOURCE_FILES})
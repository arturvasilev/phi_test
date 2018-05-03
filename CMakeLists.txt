cmake_minimum_required(VERSION 2.8)

project (test)

set (CMAKE_CXX_COMPILER "/opt/intel/bin/icc")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -mmic -O3 -qopenmp -std=c++11")

include_directories(/usr/include)
add_executable (test main.cpp)

cmake_minimum_required(VERSION 3.15)
project(02_template)

set(CMAKE_CXX_STANDARD 17)

add_executable(02_template main.cpp Stack/ArrStack.h Stack/ListStack.h tools/tools.cpp tools/tools.h)
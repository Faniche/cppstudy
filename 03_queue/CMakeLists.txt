cmake_minimum_required(VERSION 3.15)
project(03_queue)

set(CMAKE_CXX_STANDARD 17)

add_executable(03_queue main.cpp tools/tools.cpp tools/tools.h queue/ArrQueue.h queue/ListQueue.h)
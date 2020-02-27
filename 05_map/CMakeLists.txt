cmake_minimum_required(VERSION 3.15)
project(05_map)

set(CMAKE_CXX_STANDARD 17)

add_executable(05_map main.cpp map/SimpleMap.h tools/tools.cpp tools/tools.h)
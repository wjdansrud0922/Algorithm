cmake_minimum_required(VERSION 3.28)
project(PS)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(/source-charset:utf-8 /execution-charset:utf-8)


add_executable(quickSort 자료구조/sort/quickSort.cpp)
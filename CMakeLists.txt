cmake_minimum_required(VERSION 3.28)
project(PS)

set(CMAKE_CXX_STANDARD 17)



add_executable(circular_queue 자료구조/circular_queue.cpp)
add_executable(stack 자료구조/stack.cpp)
add_executable(stack_2 자료구조/stack_2.cpp)
add_executable(bubbleSort 자료구조/sort/bubbleSort.cpp)
add_executable(selectionSort 자료구조/sort/selectionSort.cpp)
add_executable(insertionSort 자료구조/sort/insertionSort.cpp)
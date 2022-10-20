cmake_minimum_required(VERSION 3.20)
project(nek_c C)

set(CMAKE_C_STANDARD 99)

add_executable(OneLinkerList LinkerList/OneLinkerList/test.c)
add_executable(LinkerList LinkerList/LinkedList/test.c)

add_executable(nek_c main.c)

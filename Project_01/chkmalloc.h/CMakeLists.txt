cmake_minimum_required(VERSION 3.21)
project(chkmalloc_h C)

set(CMAKE_C_STANDARD 99)

add_executable(chkmalloc_h main.c dynamicMemory.h)

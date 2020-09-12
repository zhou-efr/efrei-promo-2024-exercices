cmake_minimum_required(VERSION 3.17)
project(TD_en_C C)

set(CMAKE_C_STANDARD 11)

add_executable(TD_en_C SSL.h simpleLinkedList.c TD2_main.c circledLinkedList.c CLL.h doubleLinkedList.c DLL.h)
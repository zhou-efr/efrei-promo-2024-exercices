cmake_minimum_required(VERSION 3.17)
project(TD_en_C C)

set(CMAKE_C_STANDARD 11)

add_executable(TD_en_C lib/SSL.h lib/simpleLinkedList.c TD2_main.c lib/circledLinkedList.c lib/CLL.h lib/doubleLinkedList.c lib/DLL.h)
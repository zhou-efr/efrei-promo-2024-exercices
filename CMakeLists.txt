cmake_minimum_required(VERSION 3.17)
project(TD_en_C C)

set(CMAKE_C_STANDARD 11)

add_executable(TD_en_C Hephaistos_liste_1_P1_main.c lib/SLL.h lib/simpleLinkedList.c lib/circledLinkedList.c lib/CLL.h lib/doubleLinkedList.c lib/DLL.h lib/stack.c lib/stack.h hephaistos/one.c hephaistos/one.h hephaistos/Element.c hephaistos/Element.h hephaistos/two.c hephaistos/two.h hephaistos/three.c hephaistos/three.h)
cmake_minimum_required(VERSION 3.17)
project(TD_en_C C)

set(CMAKE_C_STANDARD 11)

add_executable(TD_en_C lib/SLL.h lib/simpleLinkedList.c lib/circledLinkedList.c lib/CLL.h lib/doubleLinkedList.c
        lib/DLL.h lib/stack.c lib/stack.h "hephaistos/Liste-1/one.c" "hephaistos/Liste-1/one.h" hephaistos/Element.c
        hephaistos/Element.h "hephaistos/Liste-1/two.c" "hephaistos/Liste-1/two.h" "hephaistos/Liste-1/three.c"
        "hephaistos/Liste-1/three.h" hephaistos/Liste-2/one-2.c hephaistos/Liste-2/one-2.h hephaistos/Liste-2/two-2.c
        hephaistos/Liste-2/two.h lib/tree.h lib/tree.c Hephaistos_tree_1_main.c hephaistos/Arbre-1/one-3.c
        hephaistos/Arbre-1/one.h hephaistos/Arbre-1/two-3.c hephaistos/Arbre-1/two-3.h hephaistos/Arbre-1/three-3.c
        hephaistos/Arbre-1/three-3.h)
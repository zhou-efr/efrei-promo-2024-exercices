cmake_minimum_required(VERSION 3.17)
project(TD_en_C C)

set(CMAKE_C_STANDARD 11)

add_executable(TD_en_C "old/lib/SimpleLinkedList/SLL.h" "old/lib/SimpleLinkedList/simpleLinkedList.c" "old/lib/CircledLinkedList/circledLinkedList.c" "old/lib/CircledLinkedList/CLL.h" "old/lib/DoubleLinkedList/doubleLinkedList.c"
        "old/lib/DoubleLinkedList/DLL.h" "hephaistos/Liste-1/one.c" "hephaistos/Liste-1/one.h" hephaistos/Element.c
        hephaistos/Element.h "hephaistos/Liste-1/two.c" "hephaistos/Liste-1/two.h" "hephaistos/Liste-1/three.c"
        "hephaistos/Liste-1/three.h" hephaistos/Liste-2/one-2.c hephaistos/Liste-2/one-2.h hephaistos/Liste-2/two-2.c
        hephaistos/Liste-2/two.h "old/lib/Tree/tree.h" "old/lib/Tree/tree.c" "old/Hephaistos_tree_1_main.c" hephaistos/Arbre-1/one-3.c
        hephaistos/Arbre-1/one-3.h hephaistos/Arbre-1/two-3.c hephaistos/Arbre-1/two-3.h hephaistos/Arbre-1/three-3.c
        hephaistos/Arbre-1/three-3.h "old/lib/Stack/Stack.c" "old/lib/Stack/Stack.h" hephaistos/Arbre-2/onefour.c hephaistos/Arbre-2/onefour.h hephaistos/Arbre-2/twofour.c hephaistos/Arbre-2/twofour.h hephaistos/Arbre-2/threefour.c hephaistos/Arbre-2/threefour.h)
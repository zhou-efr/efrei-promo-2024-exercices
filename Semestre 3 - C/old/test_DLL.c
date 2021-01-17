/*
 * Name : test_DLL.c
 * Date of creation : 13/09/2020
 * Date of last update : 13/09/2020
 * author(s) : zhou
 */

#include <stdio.h>
#include <stdlib.h>
#include "lib/DoubleLinkedList/DLL.h"

int main()
{
    printf("*----------------------------------------*\n");
    printf("| DLL test file, no interaction required |\n");
    printf("*----------------------------------------*\n");

    DoubleNode * a = init_double_linked_list(5);
    a->data = 1;

    printf("\n let 'a' a double linked list (DLL) :\n'a' = ");
    print_double_linked_list(a);
    printf("\n");

    printf("\npush new value at the beginning");
    printf("\n'a' = ");
    print_double_linked_list(a);
    printf("\npushing\n'a' = ");
    push_object_start(&a, 2);
    print_double_linked_list(a);
    printf("\n");

    printf("\npush new value at the end");
    printf("\n'a' = ");
    print_double_linked_list(a);
    printf("\npushing\n'a' = ");
    push_object_end(&a, 3);
    print_double_linked_list(a);
    printf("\n");

    printf("\ninsert new value at the end");
    printf("\n'a' = ");
    print_double_linked_list(a);
    printf("\npushing\n'a' = ");
    insert_object(&a, 4, 3);
    print_double_linked_list(a);
    printf("\n");

    free_double_linked_list(a);
}

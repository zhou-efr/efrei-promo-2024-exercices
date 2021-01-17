/*
 * Name : TD2_main.c
 * Date of creation : 13/09/2020
 * Date of last update : 13/09/2020
 * author(s) : zhou
 */
#include <stdlib.h>
#include <stdio.h>
#include "lib/SimpleLinkedList/SLL.h"
#include "lib/CircledLinkedList/CLL.h"
#include "lib/DoubleLinkedList/DLL.h"

int main()
{
    printf("*----------------------------------------*\n");
    printf("| TD2 test file, no interaction required |\n");
    printf("*----------------------------------------*\n");

    Node* a = 0, * b = 0, * temp = 0;
    DoubleNode * c = 0;
    int size_tab = 4, * ar = (int*)calloc(size_tab, sizeof(int));

    a = initSLL(4);
    a->data = 1;

    b = initSLL(3);
    b->data = 2;

    c = init_double_linked_list(4);
    c->data = 3;

    temp = b;

    printf("\nI - 1 : print a SLL from the end\n\t'a' = {");
    to_str(a);
    printf("} ==> {");
    reversed_to_str(a);
    printf("}\n");

    printf("\nI - 2 : concatenate two SLL\n\t'a' = {");
    to_str(a);
    printf("}\n\t'b' = {");
    to_str(b);
    printf("}\n\tmerging\n\t'a' = {");
    concatenateSSL(a, b);
    to_str(a);
    printf("}\n");

    SLL_to_CLL(a);
    printf("\nI - 3 : get the size of a CLL\n\tlet 'a' be a CLL\n\tlen(a) = %d\n", lenCLL(a));
    CLL_to_SLL(a);

    printf("\nI - 4 : convert an array to a SLL\n\tlet 'ar' = [");
    for (int i = 0; i < size_tab; ++i) {printf(" %d;", ar[i]);}
    printf("]\n\tinsertion of ar in b\n\t'b' = {");
    b = array_to_SLL(ar, size_tab);
    to_str(b);
    printf("}\n");

    printf("\nI - 5 : split a SLL into two SLL\n\t'a' = {");
    to_str(a);
    printf("}\n\tspliting a at value 2\n\t'a' = {");
    split(a, temp);
    to_str(a);
    printf("}\n\t'temp' = {");
    to_str(temp);
    printf("}\n");

    printf("\nII - 1 : add an array to a SSL\n\t'ar' = [");
    ar[0] = 1;
    for (int i = 0; i < size_tab; ++i) {printf(" %d;", ar[i]);}
    printf("]\n\t'b' = {");
    to_str(b);
    printf("}\n\tinsertion\n\t'b' = {");
    insert_array_to_SLL(&b, ar, size_tab, 0);
    to_str(b);
    printf("}\n");

    printf("\nII - 1 bis : add an array to a DLL\n\t'ar' = [");
    for (int i = 0; i < size_tab; ++i) {printf(" %d;", ar[i]);}
    printf("]\n\t'c' = {");
    to_str_DLL(c);
    printf("}\n\tinsertion\n\t'c' = {");
    insert_array_to_DLL(&c, ar, size_tab, 0);
    to_str_DLL(c);
    printf("}\n");

    printf("\nII - 2 : order SLL\n\t'a' = {");
    to_str(a);
    printf("}\n\tsorting in progress\n\t'a' = {");
    sort_SLL(&a);
    to_str(a);
    printf("}\n");

    printf("\nII - 3 : stack structure\n\ttypedef struct\n\t{\n\t\tNode* top;\n\t} Stack;\n\tThen need 'get',"
           " 'push', 'delete', 'free' etc\n");

    printf("\nII - 4 : queue structure\n\ttypedef struct\n\t{\n\t\tNode* top;\n\t} Queue;\n\tThen need 'get',"
           " 'push', 'delete', 'free' etc\n");

    printf("\nII - 5 : is DLL symmetrical\n\t'c' %s symmetrical.\n", (is_symmetrical(c))?"is":"isn't");

    free(ar);
    printf("\nII - 6 : convert SLL into int list\n\t'a' = {");
    to_str(a);
    printf("}\n\tconvertion\n\t'ar' = [");
    ar = SLL_to_array(a);
    for (int i = 0; i < len(a); ++i) {printf(" %d;", ar[i]);}
    printf("]\n");

    /*
     * 2.5 Determine if a given DLL is symmetrical
     * Create an algorithm returning true if the given DLL or integers is symmetrical.
     * A DLL is symmetrical if ∀k ∈{1,2,...,n}∶ vk = v(n−k+1). vi being the element of position i in the list.
     **/

    free_SLL(a);
    free_SLL(b);
    free_SLL(temp);
    free(ar);

    return 0;
}
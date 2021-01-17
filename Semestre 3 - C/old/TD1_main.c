/*
 * Name : TD1_main.c
 * Date of creation : 12/09/2020
 * Date of last update : 14/09/2020
 * author(s) : zhou
 */
#include <stdio.h>
#include <stdlib.h>
#include "lib/SimpleLinkedList/SLL.h"
#include "lib/CircledLinkedList/CLL.h"

int main() {
    printf("*----------------------------------------*\n");
    printf("| TD1 test file, no interaction required |\n");
    printf("*----------------------------------------*\n");

    int size = 4, researched = 0, insert_position = 3, to_delete = 0, switched[] = {0, 2};
    Node* a = initSLL(size), * to_insert = initSLL(1), * reinforcement = initSLL(2) ;

    printf("\nI - 1 : return the size of a simple linked list (aka SLL) :\n\tlet a = {");
    to_str(a);
    printf("}\n\tlen(a) = %d\n", len(a));

    printf("\nI - 1 iterative: return the size of a simple linked list (aka SLL) :\n\tlet a = {");
    to_str(a);
    printf("}\n\tlen(a) = %d\n", iterative_len(a));

    printf("\nI - 2 : first occurrence of a value in a SLL\n\tThe first occurrence of 0 in 'a' is at position %d\n",
           first_occurrence(a, researched));

    printf("\nI - 2 iterative : first occurrence of a value in a SLL\n\tThe first occurrence of 0 in 'a' is at position %d\n",
           iterative_first_occurrence_position(a, researched));

    printf("\nI - 3 : number of occurence in a SLL\n\t There's %d times %d in 'a'\n", number_of(a, researched), researched);

    printf("\nI - 3 iterative : number of occurence in a SLL\n\t There's %d times %d in 'a'\n",
           iterative_occurrence_count(a, researched), researched);

    printf("\nI - 4 : data's sum of a SLL\n\tsum(a) = %d\n", sum(a));

    printf("\nI - 4 iterative : data's sum of a SLL\n\tsum(a) = %d\n", iterative_sum(a));

    printf("\nI - 5 : is a SLL in ascending order\n\t'a' %s in ascending order\n", (ascending(a))?"is":"isn't");

    printf("\nII - 1 : insert a new node in a SLL\n\t'a' = {");
    to_str(a);
    printf("}\n\tinsertion\n\t'a'={");
    to_insert->data = 1;
    insert(&a, to_insert, insert_position);
    to_str(a);
    printf("}\n");

    printf("\nII - 2 : remove an element from a SLL\n\t'a'={");
    to_str(a);
    printf("}\n\tdeletion of %d\n\t'a'={", to_delete);
    delete(a, to_delete);
    to_str(a);
    printf("}\n");

    concatenateSLL(a, reinforcement);

    printf("\nII - 2 iterative: remove an element from a SLL\n\t'a'={");
    to_str(a);
    printf("}\n\tdeletion of %d\n\t'a'={", to_delete);
    iterative_element_removal(&a, to_delete);
    to_str(a);
    printf("}\n");

    reinforcement = initSLL(2);
    concatenateSLL(a, reinforcement);

    printf("\nII - 3 : reverse a SLL\n\t'a'={");
    to_str(a);
    printf("}\n\treversion\n\t'a'={");
    a = revert(a);
    to_str(a);
    printf("}\n");

    printf("\nII - 3 iterative : reverse a SLL\n\t'a'={");
    to_str(a);
    printf("}\n\treversion\n\t'a'={");
    iterative_reverse(&a);
    to_str(a);
    printf("}\n");

    printf("\nII - 4 : switch element in SLL\n\t'a'={");
    to_str(a);
    printf("}\n\tswitching element at position %d and %d\n\t'a'={", switched[0], switched[1]);
    switchInSLL(&a, switched[0], switched[1]);
    to_str(a);
    printf("}\n");

    reinforcement = initSLL(2);
    reinforcement->data = 3;
    reinforcement->next->data = 4;
    printf("\nIII - 1 : merge two ascending SLL\n\t'a'={");
    to_str(a);
    printf("}\n\t'b'={");
    to_str(reinforcement);
    printf("\n\tmerging a and b\n\t'a' = {");
    a = ascendingFusion(a, reinforcement);
    to_str(a);
    printf("}\n");

    printf("\nIII - 2 : is a SLL a CLL\n\t'a' %s a CLL\n", (isCLL(a))?"is":"isn't");

    printf("\nIII - 3 : detect if a SLL contains doubles\n\t'a' %scontains doubles\n", (isDuplicates(a))?"":"does not ");

    free_SLL(a);
    return 0;
}

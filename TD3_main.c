//
// Created by zhou on 06/10/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include "lib/Tree/tree.h"

int main() {

    printf("*----------------------------------------*\n");
    printf("| TD1 test file, no interaction required |\n");
    printf("*----------------------------------------*\n");

    Tree* a = create_tree(5);

    //int len(Tree* node);
    printf("\nI - 1 : return the size of a Tree :\n\tlet a = {");
    iterative_display(a);
    printf("}\n\tlen(a) = %d\n", len(a));
//int isIn(Tree* node, int target);
//void doubleIt(Tree* node);
//int childrenBefore(Tree* node);
//int t_free(Tree* node);
//
//Tree* create_tree(int size);
//int leafParity(Tree* node);
//int binaryDepth(Tree* node);
//
//Tree* createTreeFromArray(int* arr, int size);
//Tree* treeDeepCopy(Tree* node);

}

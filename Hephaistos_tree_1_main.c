//
// Created by thepa on 13/10/2020.
//

#include <stdlib.h>
#include <stdio.h>
#include "hephaistos/Element.h"
#include "hephaistos/Arbre-1/one-3.h"
#include "hephaistos/Arbre-1/two-3.h"
#include "hephaistos/Arbre-1/three-3.h"

int main()
{
    printf("*-----------------------------------------------*\n");
    printf("| Arbre-1 P1 test file, no interaction required |\n");
    printf("*-----------------------------------------------*\n");

    int size = 7;
    Tree a = trees_create_tree(size);

    printf("\n1.1 len of a tree\n\tlet a = { ");
    trees_log_parents_after_children(a);
    printf("}\n\tlen(a) = %d\n", trees_count_nodes(a));

}
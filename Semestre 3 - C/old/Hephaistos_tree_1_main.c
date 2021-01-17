//
// Created by thepa on 13/10/2020.
//

#include <stdlib.h>
#include <stdio.h>
#include "../../hephaistos/Element.h"
#include "../../hephaistos/Arbre-1/one-3.h"
#include "../../hephaistos/Arbre-1/two-3.h"
#include "../../hephaistos/Arbre-1/three-3.h"

int main()
{
    printf("*-----------------------------------------------*\n");
    printf("| Arbre-1 P1 test file, no interaction required |\n");
    printf("*-----------------------------------------------*\n");

    int size = 7, value = 1, arr[] = {0, 1, 2, 3, 4, 5, 6};
    Tree a = trees_create_tree(size), b = 0;

    printf("\n1.1 len of a tree\n\tlet a = { ");
    trees_log_parents_after_children(a);
    printf("}\n\tlen(a) = %d\n", trees_count_nodes(a));

    a->left->left->data = value;

    printf("\n1.2 is in the tree\n\tlet a = { ");
    trees_log_parents_after_children(a);
    printf("}\n\t1 %s in a\n", (trees_has_value(a, value))?"is":"isn't");

    printf("\n1.3 double values\n\tlet a = { ");
    trees_add_one_to_value(a);
    trees_log_parents_after_children(a);
    printf("}\n\tprocessing\n\ta = { ");
    trees_double_values(a);
    trees_log_parents_after_children(a);
    printf("}\n");

    printf("\n1.4 log children first\n\ta = { ");
    trees_log_parents_after_children(a);
    printf("}\n");

    printf("\n2.2 leaf parity\n\ta have an %s number of leaf\n", (trees_has_even_leaves(a))?"even":"odd");

    printf("\n2.3 depth of value\n\tdepth of 4 in a is %d\n", trees_depth_of_value(a, (value+1)*2));

    printf("\n3.1 tree from array\n\tarr = [ ");
    for(int i = 0; i < size; i++){printf("%d ", arr[i]);}
    printf("]\n\tprocessing\n\tb = { ");
    b = trees_array_to_tree(arr, size);
    trees_log_parents_after_children(b);
    printf("}\n");

    printf("\n3.2 deep copy of tree\n\ta = { ");
    trees_log_parents_after_children(a);
    printf("}\n\tb = { ");
    trees_log_parents_after_children(b);
    printf("}\n\tcopying b into a\n\ta = { ");
    a = trees_copy_tree(b);
    trees_log_parents_after_children(a);
    printf("}\n\tb = { ");
    trees_log_parents_after_children(b);
    printf("}\n");

    trees_free_tree(a);
    trees_free_tree(b);

    return 0;
}
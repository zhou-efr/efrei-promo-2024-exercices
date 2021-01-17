//
// Created by thepa on 13/10/2020.
//

#include <stdlib.h>
#include <stdio.h>
#include "../Element.h"
#include "one-3.h"

// 1.1 Compter le nombre d’éléments d’un arbre binaire
int trees_count_nodes(Node* tree){
    if(tree != 0)
    {
        return trees_count_nodes(tree->left) + trees_count_nodes(tree->right) + 1;
    }
    return 0;
}

// 1.2
int trees_has_value(Node* tree, int val){
    if(tree != 0)
    {
        if(tree->data == val)
        {
            return 1;
        }
        return (trees_has_value(tree->left, val) || trees_has_value(tree->right, val));
    }
    return 0;
}

// 1.3
void trees_double_values(Node* tree){
    if(tree != 0)
    {
        tree->data *= 2;
        trees_double_values(tree->left);
        trees_double_values(tree->right);
    }
}

void trees_add_one_to_value(Node* tree){
    if(tree != 0)
    {
        tree->data++;
        trees_add_one_to_value(tree->left);
        trees_add_one_to_value(tree->right);
    }
}

// 1.4
void trees_log_parents_after_children(Node* tree){
    if(tree != 0)
    {
        trees_log_parents_after_children(tree->left);
        trees_log_parents_after_children(tree->right);
        printf("%d ",tree->data);
    }
}

// 1.5
void trees_free_tree(Node* tree) {
    if(tree != 0)
    {
        trees_free_tree(tree->left);
        trees_free_tree(tree->right);
        free(tree);
    }
}

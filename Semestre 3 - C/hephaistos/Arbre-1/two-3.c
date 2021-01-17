//
// Created by zhou on 18/09/2020.
//

#include <stdlib.h>
#include <stdio.h>
#include "../Element.h"
#include "two-3.h"

Node* trees_create_tree(int n){
    if(n != 0)
    {
        Tree buffer = (Tree)malloc(sizeof(Node));
        buffer->data = 0;
        buffer->left = trees_create_tree((n%2)?((n-1)/2):(n/2));
        buffer->right = trees_create_tree((n%2)?((n-1)/2):((int)((n-1)/2)));
        return buffer;
    }
    return 0;

}

int trees_has_even_leaves(Node* tree){
    if (tree != 0)
        return (trees_has_even_leaves(tree->left) == trees_has_even_leaves(tree->right) && tree->left);
    return 1;
}

int trees_depth_of_value(Node* tree, int value){
    return (tree != 0)?((tree->data == value)?(0):((trees_depth_of_value(tree->left, value) > trees_depth_of_value(tree->right, value))?(trees_depth_of_value(tree->left, value) + (trees_depth_of_value(tree->left, value) >= 0)):(trees_depth_of_value(tree->right, value) + (trees_depth_of_value(tree->right, value) >= 0)))):(-1);
}
// clearer :
/*
int trees_depth_of_value(Node* tree, int value){
    return (tree != 0)?
           (
                   (tree->data == value)?
                   (
                           0
                   ):(
                           (trees_depth_of_value(tree->left, value) > trees_depth_of_value(tree->right, value))?
                           (
                                   trees_depth_of_value(tree->left, value) + (trees_depth_of_value(tree->left, value) >= 0)
                           ):(
                                   trees_depth_of_value(tree->right, value) + (trees_depth_of_value(tree->right, value) >= 0)
                           )
                   )
           ):(
                   -1
           );
}*/

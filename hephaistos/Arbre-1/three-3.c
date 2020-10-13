//
// Created by thepa on 18/09/2020.
//

#include <stdlib.h>
#include <stdio.h>
#include "three-3.h"
#include "../Element.h"

Node* trees_array_to_tree(int* array, int n){

    if(n > 0 && array != 0)
    {
        // printf("\n\tsize = %d\n\tdata = %d\n", n, array[n-1]);
        Tree buffer = (Tree)malloc(sizeof(Node));
        buffer->data = array[n - 1];

        int left_size = (n%2 == 0)?(n/2):((n-1)/2),
        right_size = (n%2 == 0)?((n/2)-1):((n-1)/2),
        *left_array = (int*)malloc(left_size*sizeof(int)),
        *right_array = (int*)malloc(right_size*sizeof(int));

        // left side copy
        for(int i = 0; i < left_size; i++){left_array[i] = array[i];}
        // right side copy
        for(int i = 0; i < right_size; i++){right_array[i] = array[i+left_size];}

        // attribution
        buffer->left = trees_array_to_tree(left_array, left_size);
        buffer->right = trees_array_to_tree(right_array, right_size);

        free(left_array);
        free(right_array);

        return buffer;
    }
    return 0;
}

Node* trees_copy_tree(Node* tree){
    if(tree != 0)
    {
        Tree buffer = (Tree)malloc(sizeof(Node));
        buffer->data = tree->data;
        buffer->left = trees_copy_tree(tree->left);
        buffer->right = trees_copy_tree(tree->right);
        return buffer;
    }
    return 0;

}

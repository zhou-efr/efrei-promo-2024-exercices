//
// Created by thepa on 02/10/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int len_t(Tree* node)
{
    if(node != 0)
    {
        return len_t(node->left) + len_t(node->right) + 1;
    }
    return 0;
}

int isIn(Tree* node, int target)
{
    if(node != 0)
    {
        if (node->data == target)
        {
            return 1;
        }
        return (isIn(node->left, target) || isIn(node->right, target));
    }
    return 0;
}

void doubleIt(Tree* node)
{
    if(node != 0)
    {
        node->data *= 2;
        doubleIt(node->left);
        doubleIt(node->right);
    }
}

int childrenBefore(Tree* node)
{
    if(node != 0)
    {
        childrenBefore(node->left);
        childrenBefore(node->right);
        printf("%d ", node->data);
    }
}

int t_free(Tree* node)
{
    if(node != 0)
    {
        t_free(node->left);
        t_free(node->right);
        free(node);
    }
}

Tree* create_tree(int size)
{
    if(size != 0)
    {
        Tree* buffer = (Tree*)malloc(sizeof(Tree));
        buffer->data = 0;
        buffer->left = create_tree((size%2)?((size-1)/2):(size/2));
        buffer->right = create_tree((size%2)?((size-1)/2):((int)((size-1)/2)));
        return buffer;
    }
    return 0;
}

int leafParity(Tree* tree){
    if (tree != 0)
        return (leafParity(tree->left) ==
                        leafParity(tree->right) && tree->left);
    return 1;
}

int binaryDepth(Tree* node)
{
    if (node != 0)
        return (binaryDepth(node->left) > binaryDepth(node->right))?binaryDepth(node->left):binaryDepth(node->right) + 1;
    return 0;
}

Tree* createTreeFromArray(int* arr, int size)
{
    /*
     * author: zhou
     *
     * original idea from valou & pablo
     * */

    if(size > 0 && arr != 0)
    {
        // printf("\n\tsize = %d\n\tdata = %d\n", size, arr[size-1]);
        Tree* buffer = (Tree*)malloc(sizeof(Tree));
        buffer->data = arr[size - 1];

        int left_size, right_size, *left_array = 0, *right_array = 0;

        if(size%2 == 0)
        {
            left_size = size/2;
            right_size = (size/2)-1;
            // left side
            left_array = (int*)malloc(left_size*sizeof(int));
            for(int i = 0; i < left_size; i++){left_array[i] = arr[i];}
            // right side
            right_array = (int*)malloc(right_size*sizeof(int));
            for(int i = 0; i < right_size; i++){right_array[i] = arr[i+left_size];}
        }
        else{
            left_size = (size-1)/2;
            right_size = (size-1)/2;
            // left side
            left_array = (int*)malloc(left_size*sizeof(int));
            for(int i = 0; i < left_size; i++){left_array[i] = arr[i];}
            // right side
            right_array = (int*)malloc(right_size*sizeof(int));
            for(int i = 0; i < right_size; i++){right_array[i] = arr[i+left_size];}
        }

        // attribution
        buffer->left = createTreeFromArray(left_array, left_size);
        buffer->right = createTreeFromArray(right_array, right_size);

        free(left_array);
        free(right_array);

        return buffer;
    }
    return 0;
}

Tree* treeDeepCopy(Tree* node)
{
    if(node != 0)
    {
        Tree* buffer = (Tree*)malloc(sizeof(Tree));
        buffer->data = node->data;
        buffer->left = treeDeepCopy(node->left);
        buffer->right = treeDeepCopy(node->right);
        return buffer;
    }
    return 0;
}

#include "../Stack/Stack.h"

void toStr_tree_left_to_right_test(Tree* node)
{
    Stack* history = initialize_stack();
    Tree* buffer = node;
    push_stack(history, 0);

    while (buffer != 0 || history->top->data != 0){
        if(buffer)
        {
            if (buffer == (Tree*)history->top->data)
            {
                Tree* buffer_right = (Tree*)pull_stack(history);
                buffer = buffer_right->right;
            }
            else
            {
                push_stack(history, (int)buffer);
                buffer = buffer->left;
            }
        }
        else {
            Tree* buffer_history = (Tree*) history->top->data;
            printf("%d ", buffer_history->data);
            buffer = (Tree*) history->top->data;
        }
    }

    free(history);
}

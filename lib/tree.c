//
// Created by thepa on 02/10/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int len(Tree* node)
{
    if(node != 0)
    {
        return len(node->left) + len(node->right) + 1;
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

int leafParity(Tree* node)
{
    if (node != 0)
    {
        if (leafParity(node->left) == leafParity(node->right))
            return 0;
        else
            return 1;
    }
    return 0;
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

    if(size > 0)
    {
        Tree* buffer = (Tree*)malloc(sizeof(Tree));
        buffer->data = arr[size-1];

        int newSize = (size%2)?((size-1)/2):(size/2);
        int* buffer_arr = (int*)malloc(newSize*sizeof(int));for (int i = 0; i < newSize; i++){buffer_arr[i]=arr[i];}
        buffer->left = createTreeFromArray(buffer_arr, newSize);
        free(buffer_arr);

        int newSizer = (size%2)?((size-1)/2):((int)((size-1)/2));
        buffer_arr = (int*)malloc(newSizer*sizeof(int));for (int i = 0; i < newSizer; i++){buffer_arr[newSizer+i]=arr[i];}
        buffer->right = createTreeFromArray(buffer_arr, newSize);
        free(buffer_arr);

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

#include "stack.h"

void iterative_display(Tree* arbre)
{
    Stack* pile = (Stack*)malloc(sizeof(Stack));
    stackPushNode(pile, arbre);
}

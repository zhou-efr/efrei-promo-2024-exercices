//
// Created by thepa on 22/10/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include "../Element.h"
#include "twofour.h"


void trees_add_value_BST(Node** tree, int value){
    if(*tree != NULL)
    {
        if(value > (*tree)->data)
        {
            trees_add_value_BST(&((*tree)->right), value);
        }
        else if(value < (*tree)->data)
        {
            trees_add_value_BST(&((*tree)->left), value);
        }
    }else
    {
        *tree = (Tree)malloc(sizeof(Node));
        (*tree)->data = value;
        (*tree)->left = NULL;
        (*tree)->right = NULL;
    }
}

void trees_delete_value_BST(Node** tree, int val)
{
    if(*tree == NULL){return;}

    Stack* iterator = initialize_stack();
    push_stack(iterator, tree);

    while(!is_stack_empty(iterator))
    {
        Tree* pulled = pull_stack(iterator);

        if((*pulled)->data == val)
        {
            if((*pulled)->left == NULL && (*pulled)->right == NULL)
            {
                free((*pulled));
                (*pulled) = NULL;
            }else if((*pulled)->right == NULL){
                Tree buffer = (*pulled)->left;
                free((*pulled));
                (*pulled) = buffer;
            }else if((*pulled)->left == NULL){
                Tree buffer = (*pulled)->right;
                free((*pulled));
                (*pulled) = buffer;
            }else{
                while(!is_stack_empty(iterator))
                {Tree* pulled3 = pull_stack(iterator);}

                push_stack(iterator, &((*pulled)->right));

                while(!is_stack_empty(iterator))
                {
                    Tree* pulled2 = pull_stack(iterator);
                    if((*pulled2)->left == NULL){
                        Tree buffer2 = (*pulled2)->right;
                        (*pulled)->data = (*pulled2)->data;
                        free((*pulled2));
                        (*pulled2) = buffer2;

                        while(!is_stack_empty(iterator))
                        {Tree* pulled4 = pull_stack(iterator);}
                    }else{
                        push_stack(iterator, &((*pulled2)->left));
                    }
                }
            }
        }else{
            if((*pulled)->right){
                push_stack(iterator, &((*pulled)->right));
            }

            if((*pulled)->left){
                push_stack(iterator, &((*pulled)->left));
            }
        }
    }
}
//
// Created by thepa on 21/10/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include "../Element.h"
#include "onefour.h"

void trees_log_prefix(Node* tree){
    if(!tree){return;}
    Stack* history = initialize_stack();
    push_stack(history, tree);

    while(!is_stack_empty(history)){
        Tree node = pull_stack(history);
        h_log(node->data);

        if(node->right){
            push_stack(history, node->right);
        }

        if(node->left){
            push_stack(history, node->left);
        }
    }

    free(history);
}


void trees_log_breadth(Node* tree){

    if(tree == NULL){return;}
    Queue* history = initialize_queue();
    push_queue(history, tree);

    while(!is_queue_empty(history)){
        Node* buffer = pull_queue(history);

        if (buffer->left != NULL)
            push_queue(history, buffer->left);
        if (buffer->right != NULL)
            push_queue(history, buffer->right);

        h_log(buffer->data);
    }

    free(history);
}

Node* trees_create_BST_node(int val){
    Tree node = (Tree)malloc(sizeof(Node));
    node->left = NULL;
    node->right = NULL;
    node->data = val;

    return node;
}

void trees_log_prefix_nary(Node* tree){
    if(tree != NULL)
    {
        h_log(tree->data);
        Element* i = tree->kids;
        while (i != NULL)
        {
            trees_log_prefix_nary(i->data);
            i = i->next;
        }
    }
}

void trees_add_random_leaf(Node** tree, Node* new_node){
    if(*tree == NULL)
    {
        *tree = new_node;
    }else{
        trees_add_random_leaf(
                (rand()%2 == 0)?(&((*tree)->left)):(&((*tree)->right)), new_node);
    }

}

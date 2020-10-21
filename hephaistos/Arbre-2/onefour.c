//
// Created by thepa on 21/10/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include "../Element.h"
#include "onefour.h"

typedef struct StackNode {
    Tree data;
    struct StackNode* next;
}StackNode;

typedef struct Stack{
    StackNode* top;
}Stack;

Stack* initialize_stack()
{
    Stack* buffer = (Stack*)malloc(sizeof(Stack));
    buffer->top = NULL;
    return buffer;
}

int is_stack_empty(Stack* stack)
{
    return !(stack->top);
}

Tree pull_stack(Stack* stack)
{
    Tree data = NULL;
    if (!is_stack_empty(stack))
    {
        data = stack->top->data;
        StackNode* buffer = stack->top;
        stack->top = buffer->next;
        free(buffer);
    }
    return data;
}

void push_stack(Stack* stack, Tree data)
{
    StackNode* buffer = (StackNode*)malloc(sizeof(StackNode));
    buffer->data = data;
    buffer->next = stack->top;
    stack->top = buffer;
}

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

typedef struct QueueNode {
    Tree data;
    struct QueueNode* next;
}QueueNode;

typedef struct Queue{
    QueueNode* top;
}Queue;

Queue* initialize_queue()
{
    Queue* buffer = (Queue*)malloc(sizeof(Queue));
    buffer->top = NULL;
    return buffer;
}

int is_queue_empty(Queue* queue)
{
    if(queue == NULL)
        return 0;
    return !(queue->top);
}

Tree pull_queue(Queue* queue)
{
    Tree data = NULL;
    if (!is_queue_empty(queue))
    {
        data = queue->top->data;
        QueueNode* buffer = queue->top;
        queue->top = buffer->next;
        free(buffer);
    }
    return data;
}

void push_queue(Queue* queue, Tree data)
{
    if (queue == NULL)
    {
        queue = initialize_queue();
    }

    if(queue->top != NULL){
        QueueNode* buffer = queue->top;
        for(buffer; buffer->next != 0; buffer = buffer->next);
        buffer->next = (QueueNode*)malloc(sizeof(QueueNode));
        buffer->next->data = data;
        buffer->next->next = NULL;
    }else{
        queue->top = (QueueNode*)malloc(sizeof(QueueNode));
        queue->top->data = data;
        queue->top->next = NULL;
    }
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

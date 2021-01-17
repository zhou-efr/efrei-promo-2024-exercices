//
// Created by zhou on 18/09/2020.
//

#ifndef TD_EN_C_ELEMENT_H
#define TD_EN_C_ELEMENT_H

typedef struct Element {
    int data;
    struct Element *next;
} Element;

typedef Element* List;

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

typedef Node* Tree;

void h_log(int value);


typedef struct QueueNode {
    Tree data;
    struct QueueNode* next;
}QueueNode;

typedef struct Queue{
    QueueNode* top;
}Queue;

void push_queue(Queue* queue, Tree data);
Tree pull_queue(Queue* queue);
int is_queue_empty(Queue* queue);
Queue* initialize_queue();

typedef struct StackNode {
    Tree data;
    struct StackNode* next;
}StackNode;

typedef struct Stack{
    StackNode* top;
}Stack;

void push_stack(Stack* stack, Tree data);
Tree pull_stack(Stack* stack);
int is_stack_empty(Stack* stack);
Stack* initialize_stack();

#endif //TD_EN_C_ELEMENT_H

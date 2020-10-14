//
// Created by thepa on 14/10/2020.
//

#ifndef TD_EN_C_STACK_H
#define TD_EN_C_STACK_H

typedef struct StackNode {
    int data;
    struct StackNode* next;
}StackNode;

typedef struct Stack{
    StackNode* top;
}Stack;

Stack* initialize_stack();
int is_stack_empty(Stack* stack);
int pull_stack(Stack* stack);
void push_stack(Stack* stack, int data);

#endif //TD_EN_C_STACK_H

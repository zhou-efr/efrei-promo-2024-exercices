//
// Created by thepa on 14/10/2020.
//

#include <stdlib.h>
#include "Stack.h"

Stack* initialize_stack()
{
    Stack* buffer = (Stack*)malloc(sizeof(Stack));
    buffer->top = 0;
    return buffer;
}

int is_stack_empty(Stack* stack)
{
    return !(stack->top);
}

int pull_stack(Stack* stack)
{
    int data = 0;
    if (!is_stack_empty(stack))
    {
        data = stack->top->data;
        StackNode* buffer = stack->top;
        stack->top = buffer->next;
        free(buffer);
    }
    return data;
}

void push_stack(Stack* stack, int data)
{
    StackNode* buffer = (StackNode*)malloc(sizeof(StackNode));
    buffer->data = data;
    buffer->next = stack->top;
    stack->top = buffer;
}

void toStr_tree_left_to_right_test(Tree node)
{
    Stack* history = initialize_stack();
    Tree buffer = node;
    push_stack(history, 0);

    do{
        if(buffer)
        {
            if (buffer == (Tree)history->top->data)
            {
                Tree buffer_right = (Tree)pull_stack(history);
                buffer = buffer_right->right;
            }
            else
            {
                push_stack(history, (int)buffer);
                buffer = buffer->left;
            }
        }
        else {
            Tree buffer_history = (Tree) history->top->data;
            printf("%d ", buffer_history->data);
            buffer = (Tree) history->top->data;
        }
    }while (buffer != 0 || history->top->data != 0);

    free(history);
}

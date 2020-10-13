//
// Created by zhou on 13/09/2020.
//

#include <stdlib.h>
#include "stack.h"
#include "SLL.h"

int stackGet(Stack* stack)
{
    /*
     * stackGet :
     * * stack : a stack
     *
     * return the value of the top.
     */

    return stack->top->data;
}

void stackPushNode(Stack* stack, Node* node)
{
    /*
     * stackPushNode :
     * * stack : a stack
     * * node : the node to push
     *
     * push a new node to the top of the stack
     */

    insert(&(stack->top), node, 0);
}

void stackPushValue(Stack* stack, int value)
{
    /*
     * stackPushNode :
     * * stack : a stack
     * * node : the node to push
     *
     * push a new node to the top of the stack
     */

    Node* buffer = initSLL(1);
    buffer->data = value;
    insert(&(stack->top), buffer, 0);
}

void stackRemove(Stack* stack)
{
    /*
     * stackRemove :
     * * stack : a stack
     *
     * remove the top node of a stack.
     */

    if (!stackIsEmpty(stack))
    {
        Node* temp = stack->top;
        stack->top = stack->top->next;
        free(temp);
    }
}

int stackIsEmpty(Stack* stack)
{
    /*
     * stackIsEmpty :
     * * stack : a stack
     *
     * return true if empty false else.
     */

    return (stack->top != 0);
}


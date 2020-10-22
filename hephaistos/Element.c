//
// Created by zhou on 18/09/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include "Element.h"

void h_log(int value)
{
    printf("%d", value);
}

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

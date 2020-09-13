/*
 * Name : doubleLinkedList.c
 * Date of creation : 12/09/2020
 * Date of last update : 12/09/2020
 * author(s) : zhou
 */
#include "DLL.h"
#include <stdio.h>
#include <stdlib.h>

DoubleNode* init_double_linked_list(int size)
{
    DoubleNode* beginning = (DoubleNode*)malloc(sizeof(DoubleNode));
    DoubleNode* current_node = beginning;
    for (int i = 0; i < size; i++)
    {
        current_node->data = 0;
        current_node->next = (i+1 == size)?0:(DoubleNode*)malloc(sizeof(DoubleNode));
        if (i == 0)
        {
            current_node->previous = 0;
        }
        else if (i + 1 != size)
        {
            current_node->next->previous = current_node;
        }
        current_node=current_node->next;
    }
    return beginning;
}

void print_double_linked_list(DoubleNode* start)
{
    DoubleNode* current_node = start;
    printf("{");
    while (current_node != 0)
    {
        printf(" %d;", current_node->data);
        current_node = current_node->next;
    }
    printf("}");
}

void free_double_linked_list(DoubleNode* start)
{
    DoubleNode* current_node = start->next;
    while (current_node != 0)
    {
        free(current_node->previous);
        current_node = current_node->next;
    }
}

void push_object_start(DoubleNode** start, int value)
{
    DoubleNode* new_node = (DoubleNode*)malloc(sizeof(DoubleNode));
    if (start == 0)
    {
        *start = new_node;
        new_node->next = 0;
        new_node->data = value;
        new_node->previous = 0;
    }
    else {
        new_node->data = value;
        new_node->previous = 0;
        new_node->next = *start;
        (*start)->previous = new_node;
        *start = (new_node);
    }
}

void push_object_end(DoubleNode** start, int value)
{
    DoubleNode* new_node = (DoubleNode*)malloc(sizeof(DoubleNode));
    DoubleNode* last_node = *start;
    if (*start == 0)
    {
        *start = new_node;
        new_node->next = 0;
        new_node->data = value;
        new_node->previous = 0;
    }
    else {
        while (last_node->next != 0) { last_node = last_node->next; }
        last_node->next = new_node;
        new_node->data = value;
        new_node->previous = last_node;
        new_node->next = 0;
    }
}

void insert_object(DoubleNode **start, int value, int position_from_0)
{
    int buffer_position = 0;
    DoubleNode* new_node = (DoubleNode*)malloc(sizeof(DoubleNode));
    DoubleNode* current_node = *start;
    if (*start == 0)
    {
        *start = new_node;
        new_node->next = 0;
        new_node->data = value;
        new_node->previous = 0;
    }
    else {
        if (position_from_0 == 0)
        {
            push_object_start(start, value);
        }
        else {
            while (current_node->next != 0 && buffer_position < position_from_0-1)
            {
                current_node = current_node->next;
                buffer_position++;
            }
            new_node->next = current_node->next;
            current_node->next = new_node;
            new_node->data = value;
            new_node->previous = current_node;
        }
    }
}

DoubleNode* array_to_DLL(int* target, int size)
{
    DoubleNode* beginning = (DoubleNode*)malloc(sizeof(DoubleNode));
    DoubleNode* current_node = beginning;
    for (int i = 0; i < size; i++)
    {
        current_node->data = target[i];
        current_node->next = (i+1 == size)?0:(DoubleNode*)malloc(sizeof(DoubleNode));
        if (i == 0)
        {
            current_node->previous = 0;
        }
        else if (i + 1 != size)
        {
            current_node->next->previous = current_node;
        }
        current_node=current_node->next;
    }
    return beginning;
}

void to_str_DLL(DoubleNode* node)
{
    if(node != 0)
    {
        printf(" %d;", node->data);
        to_str_DLL(node->next);
    }
}

void insert_array_to_DLL(DoubleNode** destination, int* target, int size, int pos)
{
    DoubleNode* buffer = array_to_DLL(target, size), * next = 0, * runner = *destination;
    if (pos <= 0)
    {
        next = buffer;
        *destination = buffer;
        while (next->next != 0) {next = next->next;}
        next->next = runner;
        runner->previous = next;
    }else{
        int i = pos;

        while (i > 1) {runner = runner->next; i--;}

        next = runner->next;
        runner->next = buffer;
        buffer->previous = runner;

        while (runner->next != 0) {runner = runner->next;}

        next->previous = runner;
        runner->next = next;
    }
}

int is_symmetrical(DoubleNode* node)
{
    DoubleNode* buffer = node, * end = node; while (end->next != 0) {end = end->next;}
    while(buffer != end)
    {
        if (buffer->data != end->data)
        {
            return 0;
        }
        buffer = buffer->next;
        end = end->previous;
    }
    return 1;
}

//
// Created by thepa on 21/09/2020.
//

#ifndef TD_EN_C_TWO_H
#define TD_EN_C_TWO_H

#include "one-2.h"
#include "../Element.h"


// 2.1
void list_add_array(Element** l, int* arr, int n, int pos);

// 2.2
void list_bubble_sort(Element** l);

// 2.3
typedef struct Stack{
    List top;
} Stack;

Stack* create_stack();
int is_empty(Stack* s);
void push(Stack* s, int val);
int pop(Stack* s);

// 2.4
typedef struct Queue{
    List top;
} Queue;

Queue* create_Queue();
void enqueue(Queue* q, int val);
int dequeue(Queue* q);

typedef struct DElement {
    int data;
    struct Element *next;
    struct Element* prev;
} DElement;

// 2.5
int list_is_sym(DElement* l);

// 2.6
int* list_to_array(Element* l);

#endif //TD_EN_C_TWO_H

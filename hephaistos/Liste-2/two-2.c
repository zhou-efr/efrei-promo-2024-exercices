//
// Created by thepa on 21/09/2020.
//


#include <stdio.h>
#include <stdlib.h>
#include "two.h"
#include "../Element.h"
#include "one-2.h"

void list_add_array(Element** l, int* arr, int n, int pos){
    if(l != 0 && arr != 0)
    {
        if(*l == 0 || pos <= 1)
        {
            Element* buffer = *l, * buffer_array = list_from_array(arr, n);
            (*l) = buffer_array;
            while(buffer_array->next != 0)
            {
                buffer_array = buffer_array->next;
            }
            buffer_array->next = buffer;
        }else{
            list_add_array(&((*l)->next),arr, n, pos-1);
        }
    }
}

Stack* create_stack(){
    Stack* wen = (Stack*)malloc(sizeof(Stack)); // wen <=> new
    wen->top = 0;
    return wen;
}

int is_empty(Stack* s){
    return (s->top == 0);
}

void push(Stack* s, int val){
    List buffer = (List)malloc(sizeof(Element));
    buffer->data = val;
    buffer->next = s->top;
    s->top = buffer;
}

//En cas de pile vide, renvoyer -1 (arbitraire)
//If the stack is empty, return -1 (arbitrary)
int pop(Stack* s){
    if(s == 0 || is_empty(s)){return -1;}
    List buffer = s->top->next;
    int buffer_data = s->top->data;
    free(s->top);
    s->top = buffer;
    return buffer_data;
}

Queue* create_queue(){
    Queue* wen = (Queue*)malloc(sizeof(Queue)); // wen <=> new
    wen->top = 0;
    return wen;
}

void enqueue(Queue* q, int val){
    if(q == 0){return;}

    List buffer = (List)malloc(sizeof(Element)), runner = q->top;
    buffer->data = val;
    buffer->next = 0;

    if(runner == 0)
    {
        q->top = buffer;
    }
    else
    {
        while(runner->next != 0)
        {
            runner = runner->next;
        }

        runner->next = buffer;
    }

}

//En cas de pile vide, renvoyer -1 (arbitraire)
//If the stack is empty, return -1 (arbitrary)
int dequeue(Queue* q){
    if(q == 0 || is_empty(q)){return -1;}
    List buffer = q->top->next;
    int buffer_data = q->top->data;
    free(q->top);
    q->top = buffer;
    return buffer_data;
}

int list_is_sym(DElement* l){
    if(l == 0){return 1;}
    DElement* buffer = l, * end = l; while (end->next != 0) {end = end->next;}
    while(buffer != end)
    {
        if (buffer->data != end->data)
        {
            return 0;
        }
        buffer = buffer->next;
        end = end->prev;
    }
    return 1;
}

int* list_to_array(Element* l){
    if(l == 0){return 0;}
    Element* buffer = l;
    int size = 0;
    while(buffer != 0)
    {
        buffer = buffer->next;
        size++;
    }

    int* ar = (int*)calloc(size, sizeof(int));
    buffer = l;

    for (int i = 0; i < size; ++i)
    {
        ar[i] = buffer->data;
        buffer = buffer->next;
    }

    return ar;
}

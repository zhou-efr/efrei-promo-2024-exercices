//
// Created by thepa on 21/09/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include "one-2.h"

void h_log(int val)
{
    printf(" %d;", val);
}

Element* list_log_backwards(Element* l){
    if (l != 0)
    {
        list_log_backwards(l->next);
        h_log(l->data);
    }
}

Element* list_concat(Element* l1, Element* l2){
    if(l1 == 0){return l2;}

    if(l1->next == 0)
    {
        l1->next = l2;
    }else
    {
        list_concat(l1->next, l2);
        return l1;
    }
}

int list_circ_size(Element* l){
    List buffer = l;
    int i = 0;
    if(l == 0){return 0;}

    while (buffer->next != l)
    {
        buffer = buffer->next;
        i++;
    }

    return ++i;
}

Element* list_from_array(int* tab, int n){

    if(tab == 0 || n == 0){return 0;}

    List start = (List)malloc(sizeof(Element)), buffer = start;

    for (int i = 0; i < n; ++i)
    {
        buffer->data = tab[i];
        buffer->next = (i+1 < n)?(List)malloc(sizeof(Element)):0;
        buffer = buffer->next;
    }

    return start;
}

void list_split(Element** l, Element* e)
{

    if ((*l) != 0)
    {
        if((*l) == e){
            (*l) = 0;
        }
        else if ((*l)->next == e)
        {
            (*l)->next = 0;
        }else{
            list_split(&((*l)->next), e);
        }
    }
}

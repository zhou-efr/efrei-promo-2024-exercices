//
// Created by zhou on 18/09/2020.
//

#include <stdlib.h>
#include <stdio.h>
#include "Hephaistos.h"

// 1.1 Parcourir intégralement une liste
int list_size(Element* l){
    if (l == 0)
    {
        return 0;
    }else
    {
        return list_size(l->next) + 1;
    }
}

// 1.2 Parcourir partiellement une liste
int list_position(Element* l, int p){

    if (l == 0)
    {
        return -1;
    }else if(l->data == p){
        return 1;
    }else
    {
        int returned = list_position(l->next, p);
        return (returned >= 0)?(returned + 1):-1;
    }
}

// 1.3 Compter le nombre d’occurences dans une liste
int list_occurences(Element* l, int n){
    if (l == 0)
    {
        return 0;
    }else if(l->data == n){
        return list_occurences(l->next, n) + 1;
    }else
    {
        return list_occurences(l->next, n);
    }
}

// 1.4 Somme éléments d’une liste
int list_sum(Element* l){
    if(l == 0)
    {
        return 0;
    }else
    {
        return list_sum(l->next) + l->data;
    }
}

// 1.5 Déterminer si une liste est strictement croissante

// 2.1 Ajouter un élément à une liste
void list_insert(Element** l, int n, int pos){
    if(l != NULL)
    {
        if(*l == NULL || pos <= 1)
        {
            Element* buffer = *l;
            (*l) = (Element*)malloc(sizeof(Element));
            (*l)->data = n;
            (*l)->next = buffer;
        }else{
            list_insert(&((*l)->next), n, pos-1);
        }
    }
}

// 2.2 Supprimer un élément d’une liste
void list_remove(Element** l, int n){
    if(l == 0 || (*l) == 0){return;}

    Element* buffer = *l, * temp = 0;
    int i = 0;

    while(buffer->next != 0)
    {
        if(buffer->next->data == n)
        {
            temp = buffer->next->next;
            free(buffer->next);
            buffer->next = temp;
        }else{
            buffer = buffer->next;
        }
    }

    if ((*l)->data == n)
    {
        buffer = *l;
        *l = (*l)->next;
        free(buffer);
    }
}

// 2.3 Inverser une liste simplement chaînée
void list_reverse(Element** l){

    if(l == 0 || (*l) == 0){return;}

    Element* buffer = *l, * temps[] = {buffer->next, 0};

    while(temps[0] != 0)
    {
        temps[0] = buffer->next;
        buffer->next = temps[1];
        temps[1] = buffer;
        buffer = (temps[0])?temps[0]:buffer;
    }

    *l = buffer;
}

// 2.4 Permuter deux éléments dans une liste
void list_swap(Element** l, int pos1, int pos2){

    if(*l == 0){return;}
    if(pos1 == pos2){return;}

    int first = (pos1 > pos2)?(pos2-1):(pos1-1);
    int second = (pos1 > pos2)?(pos1-1):(pos2-1);
    int size = 0;

    Element* buffer = *l;

    while(buffer != 0){buffer = buffer->next;size++;}
    buffer = (*l);
    size--;

    if(first < 0)
        first = 0;

    if(second > size)
        second = size;

    Element* ante = 0;
    Element* pos_1 = 0;
    Element* post = 0;
    Element* pos_2 = 0;

    int i = 0;

    while(second >= 0)
    {
        //check first
        if (first == 1)
            ante = buffer;
        else if (first == 0)
            pos_1 = buffer;

        //check second
        if (second == 1)
            post = buffer;
        else if (second == 0)
            pos_2 = buffer;

        // I know that it possible to fusion this and the previous condition
        // but it clearer like that
        if(pos_2 != 0)
        {
            // replacing the next of the next before pos1
            if (ante == 0)
                (*l) = pos_2;
            else
                ante->next = pos_2;

            // replacing the next of the next before pos2
            post->next = pos_1;

            // storing the node after the current one
            buffer = pos_2->next;

            // replacing the next of the current node with the next of pos_1
            pos_2->next = pos_1->next;

            // doing the same for pos_1
            pos_1->next = buffer;
        }else
        {
            buffer = buffer->next;
        }

        first --;
        second --;
    }
}

// 3.1 Fusionner deux listes chaînées dont les valeurs des éléments sont croissantes
Element* list_merge_asc(Element* l1, Element* l2){

    if(l1 != NULL)
    {
        if(l2 != NULL)
        {
            if(l1->data < l2->data)
            {
                l1->next = list_merge_asc(l1->next,l2);
                return l1;
            }
            else
            {
                l2->next = list_merge_asc(l1,l2->next);
                return l2;
            }
        }
        return l1;
    }
    if(l2 != NULL)
    {
        return l2;
    }
    return NULL;
}

// 3.2 Déterminer si une liste contient un cycle
int list_has_cycle(Element* l){
    if(l == 0){
        return 0;
    }

    int size = 1;
    Element* node = l, * node2 = 0, **nodes = (Element**)malloc(sizeof(Element*));

    while(node != 0)
    {
        nodes[size-1] = node;
        for(int i = 0; i < size-1; i++)
        {
            if(node == nodes[i])
            {
                free(nodes);
                return 1;
            }
        }
        size++;
        nodes = (Element**)realloc(nodes, size*sizeof(Element*));
        node = node->next;
    }

    free(nodes);
    return 0;
}

// 3.3 Déterminer si une liste contient des doublons
int list_has_doubles(Element* l)
{
    if(l == 0){return 0;}
    Element* buffer = l, * buffer2 = 0;

    while (buffer->next != 0)
    {
        buffer2 = l;
        while(buffer2 != 0)
        {
            if (buffer->data == buffer2->data && buffer2 != buffer)
            {
                return 1;
            }
            buffer2 = buffer2->next;
        }
        buffer = buffer->next;
    }
    return 0;
}

//
// Created by thepa on 18/09/2020.
//

#include <stdlib.h>
#include <stdio.h>
#include "../Element.h"
#include "three.h"

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

int list_has_cycle_KS(Element* l)
{
    /*
     * author : Kylian Sauvee
     *
     * if you want to know more about the algorithm search : Algorithme du lievre et de la tortue
     */

    List fast, slow = l;

    if (l == NULL) return 0;
    else {
        while (1) {

            slow = slow->next;

            if (fast->next != NULL) fast = fast->next->next;
            else return 0;


            if (slow == NULL || fast == NULL) return 0;

            if (slow == fast) return 1;
        }
    }

    return 0;
}

int list_has_doubles_BL(Element* l)
{
    /*
     * author : Benjamin Lesieux
     */

    if (l == NULL) return 0;

    for (List temp = l; temp != NULL; temp = temp->next) {
        for (List second = temp->next; second != NULL; second = second->next) {
            if (temp->data == second->data) return 1;
        }
    }

    return 0;
}
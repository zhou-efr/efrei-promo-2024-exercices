//
// Created by zhou on 18/09/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include "../Element.h"
#include "one.h"

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


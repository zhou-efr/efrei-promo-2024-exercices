//
// Created by thepa on 18/09/2020.
//

#ifndef TD_EN_C_HEPHAISTOS_H
#define TD_EN_C_HEPHAISTOS_H

#include <stdlib.h>
#include <stdio.h>

typedef struct Element {
    int data;
    struct Element *next;
} Element;

typedef Element* List;

/// 1.*

// 1.1
int list_size(Element* l);

// 1.2
int list_position(Element* l, int p);

// 1.3
int list_occurences(Element* l, int n);

// 1.4
int list_sum(Element* l);

// 1.5


/// 2.*

// 2.1
void list_insert(Element** l, int n, int pos);

// 2.2
void list_remove(Element** l, int n);

// 2.3
void list_reverse(Element** l);

// 2.4
void list_swap(Element** l, int pos1, int pos2);

/// 3.*

// 3.1
Element* list_merge_asc(Element* l1, Element* l2);

// 3.2
int list_has_cycle(Element* l);

// 3.3
int list_has_doubles(Element* l);

#endif //TD_EN_C_HEPHAISTOS_H

//
// Created by thepa on 21/09/2020.
//

#ifndef TD_EN_C_ONE_2_H
#define TD_EN_C_ONE_2_H

#include "../Element.h"

void h_log(int val);

// 1.1
Element* list_log_backwards(Element* l);

// 1.2
Element* list_concat(Element* l1, Element* l2);

// 1.3
int list_circ_size(Element* l);

// 1.4
Element* list_from_array(int* tab, int n);

// 1.5
void list_split(Element** l, Element* e);

#endif //TD_EN_C_ONE_2_H

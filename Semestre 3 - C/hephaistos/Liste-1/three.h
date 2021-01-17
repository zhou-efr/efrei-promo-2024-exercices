//
// Created by thepa on 18/09/2020.
//

#ifndef TD_EN_C_THREE_H
#define TD_EN_C_THREE_H

#include <stdlib.h>
#include <stdio.h>
#include "../Element.h"

/// 3.*

// 3.1
Element* list_merge_asc(Element* l1, Element* l2);

// 3.2
int list_has_cycle(Element* l);
int list_has_cycle_KS(Element* l);

// 3.3
int list_has_doubles(Element* l);
int list_has_doubles_BL(Element* l);

#endif //TD_EN_C_THREE_H

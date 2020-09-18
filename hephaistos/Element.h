//
// Created by zhou on 18/09/2020.
//

#ifndef TD_EN_C_ELEMENT_H
#define TD_EN_C_ELEMENT_H

typedef struct Element {
    int data;
    struct Element *next;
} Element;

typedef Element* List;

#endif //TD_EN_C_ELEMENT_H

//
// Created by thepa on 30/10/2020.
//

#ifndef TD_EN_C_THREEFOUR_H
#define TD_EN_C_THREEFOUR_H

#include "../Element.h"

int depth(Node* tree);
int bf(Node* tree);
void right_rotation(Node** tree);
void left_rotation(Node** tree);
void balance(Node** tree);
void trees_balance_BST(Node** tree);


#endif //TD_EN_C_THREEFOUR_H

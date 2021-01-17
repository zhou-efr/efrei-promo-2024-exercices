//
// Created by thepa on 21/10/2020.
//

#ifndef TD_EN_C_ONEFOUR_H
#define TD_EN_C_ONEFOUR_H

#include "../Element.h"

void trees_log_prefix(Node* tree);
void trees_log_breadth(Node* tree);
Node* trees_create_BST_node(int val);
void trees_log_prefix_nary(Node* tree);
void trees_add_random_leaf(Node** tree, Node* new_node);

#endif //TD_EN_C_ONEFOUR_H

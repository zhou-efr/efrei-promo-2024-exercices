//
// Created by thepa on 13/10/2020.
//

#ifndef TD_EN_C_ONE_3_H
#define TD_EN_C_ONE_H

#include "../Element.h"

int trees_count_nodes(Node* tree);
int trees_has_value(Node* tree, int val);
void trees_double_values(Node* tree);
void trees_add_one_to_value(Node* tree);
void trees_log_parents_after_children(Node* tree);
void trees_free_tree(Node* tree);

#endif //TD_EN_C_ONE_3_H

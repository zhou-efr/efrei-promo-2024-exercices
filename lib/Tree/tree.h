//
// Created by thepa on 02/10/2020.
//

#ifndef TD_EN_C_TREE_H
#define TD_EN_C_TREE_H


typedef struct SThree
{
    int data;
    struct SThree* left;
    struct SThree* right;
}Tree;

int len_t(Tree* node);
int isIn(Tree* node, int target);
void doubleIt(Tree* node);
int childrenBefore(Tree* node);
int t_free(Tree* node);

Tree* create_tree(int size);
int leafParity(Tree* node);
int binaryDepth(Tree* node);

Tree* createTreeFromArray(int* arr, int size);
Tree* treeDeepCopy(Tree* node);

#endif //TD_EN_C_TREE_H

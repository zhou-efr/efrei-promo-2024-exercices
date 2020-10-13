//
// Created by thepa on 13/10/2020.
//

#include <stdlib.h>
#include <stdio.h>
#include "lib/tree.h"

int main()
{
    Tree* arbre = 0;
    int size = 6;
    int* tab = (int*)malloc(size*sizeof(int));
    for(int i = 0; i < size; i++){tab[i] = i;}
    printf(tab[0]);
    arbre = createTreeFromArray(tab, size);
    childrenBefore(arbre);

    return 0;
}
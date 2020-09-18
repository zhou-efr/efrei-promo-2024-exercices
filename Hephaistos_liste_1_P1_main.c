#include <stdio.h>
#include <stdlib.h>
#include "hephaistos/Element.h"
#include "hephaistos/one.h"
#include "lib/SLL.h"

int main()
{
    printf("*-----------------------------------------------*\n");
    printf("| Liste 1 P1 test file, no interaction required |\n");
    printf("*-----------------------------------------------*\n");

    Element* a = initSLL(4);
    a->data = 1;

    printf("\n1.1 Parcourir integralement une liste\n\ta = {");
    to_str(a);
    printf("}\n\tlen(a) = %d\n", list_size(a));

    printf("\n1.2 Parcourir partiellement une liste\n\tfirst position of 0 : %d\n", list_position(a, 0));

    printf("\n1.3 Compter le nombre d'occurences dans une liste\n\tnumber of 0 : %d\n", list_occurences(a, 0));

    printf("\n1.4 Somme elements d'une liste\n\tsum(a) = %d\n", list_sum(a));
}
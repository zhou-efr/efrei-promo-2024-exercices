#include <stdio.h>
#include <stdlib.h>
#include "../../hephaistos/Element.h"
#include "../../hephaistos/Liste-1/one.h"
#include "../../hephaistos/Liste-1/two.h"
#include "../../hephaistos/Liste-1/three.h"
#include "lib/SimpleLinkedList/SLL.h"

int main()
{
    printf("*-----------------------------------------------*\n");
    printf("| Liste-1 P1 test file, no interaction required |\n");
    printf("*-----------------------------------------------*\n");

    Element* a = initSLL(4);
    a->data = 1;

    Element* b = initSLL(2);
    b->data = 1;
    b->next->data = 4;

    Element* c = 0;

    printf("\n1.1 Parcourir integralement une liste\n\ta = {");
    to_str(a);
    printf("}\n\tlen(a) = %d\n", list_size(a));

    printf("\n1.2 Parcourir partiellement une liste\n\tfirst position of 0 : %d\n", list_position(a, 0));

    printf("\n1.3 Compter le nombre d'occurences dans une liste\n\tnumber of 0 : %d\n", list_occurences(a, 0));

    printf("\n1.4 Somme elements d'une liste\n\tsum(a) = %d\n", list_sum(a));

    printf("\n2.1 Ajouter un element à une liste\n\ta = {");
    to_str(a);
    printf("}\n\tinsertion of 2 at the end\n\ta = {");
    list_insert(&a, 2, 5);
    to_str(a);
    printf("}\n");

    printf("\n2.2 Supprimer un élément d’une liste\n\ta = {");
    to_str(a);
    printf("}\n\tdelete 1\n\ta = {");
    list_remove(&a, 1);
    to_str(a);
    printf("}\n");

    printf("\n2.3 Inverser une liste simplement chainee\n\ta = {");
    to_str(a);
    printf("}\n\trevertion\n\ta = {");
    list_reverse(&a);
    to_str(a);
    printf("}\n");

    printf("\n2.4 Permuter deux elements dans une liste\n\ta = {");
    to_str(a);
    printf("}\n\tswaping node at position 0 and node at position 4\n\ta = {");
    list_swap(&a, 1, 4);
    to_str(a);
    printf("}\n");

    printf("\n3.1 Fusionner deux listes chaînées dont les valeurs des elements sont croissantes\n\ta = {");
    to_str(a);
    printf("}\n\tb = {");
    to_str(b);
    printf("}\n\tfusion of a and b\n\tc = {");
    c = list_merge_asc(a, b);
    to_str(c);
    printf("}\n");

    printf("\n3.2 Determiner si une liste contient un cycle\n\tc %s un cycle\n", (list_has_cycle_KS(c))?"contient":"ne contient pas");

    printf("\n3.3 Determiner si une liste contient des doublons\n\tc %s des doublons\n", (list_has_doubles_BL(c))?"contient":"ne contient pas");

    free_SLL(c);
    return 0;
}
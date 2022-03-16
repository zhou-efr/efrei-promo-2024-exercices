//
// Created by thepa on 15/03/2022.
//

#include "MVVT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void MVVT()
{
    int np,ps,i;
    int **sa;
    printf("enter how many pages\n");
    scanf("%d",&np);
    printf("enter the page size \n");
    scanf("%d",&ps);
    sa=(int**)malloc(sizeof(int*)*np);
    for(i=0;i<np;i++)
    {
        sa[i]=(int*)malloc(sizeof(int));
        printf("page%d\t address %u\n",i+1,sa[i]);
    }
    for(i=0;i<np;i++)
    {
        free(sa[i]);
    }
    getch();
    free(sa);
}

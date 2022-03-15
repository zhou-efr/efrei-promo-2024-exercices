//
// Created by thepa on 15/03/2022.
//

#include "MVT.h"
#include<stdio.h>
#include<conio.h>
void MVT()
{
    int i,osm,nPage,total,pg[25];

    printf("\nEnter total memory size:");
    scanf("%d",&total);

    printf("\nEnter memory for OS:");
    scanf("%d",&osm);

    printf("\nEnter no.of pages:");
    scanf("%d",&nPage);
    for(i=0;i< nPage;i++)
    {
        printf("Enter size of page[%d]:",i+1);
        scanf("%d",&pg[i]);
    }
    total=total-osm;

    for(i=0;i< nPage;i++)
    {
        if(total>=pg[i])
        {
            printf("\n Allocate page %d",i+1);
            total=total-pg[i];
        }
        else
            printf("\n page %d is not allocated due to insufficient memory.",i+1);
    }
    printf("\n External Fragmentation is:%d",total);
    getch();
}

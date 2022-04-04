//
// Created by thepa on 04/04/2022.
//

#include "IndexedFileAllocation.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void indexedFileAllocation()
{
    int f[50], index[50],i, n, st, len, j, c, k, ind,count=0;
//    clrscr();
    for(i=0;i<50;i++)
        f[i]=0;
    x:printf("Enter the index block: ");
    scanf("%d",&ind);
    if(f[ind]!=1)
    {
        printf("Enter no of blocks needed and no of files for the index %d on the disk : \n", ind);
        scanf("%d",&n);
    }
    else
    {
        printf("%d index is already allocated \n",ind);
        goto x;
    }
    y: count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d", &index[i]);
        if(f[index[i]]==0)
            count++;
    }
    if(count==n)
    {
        for(j=0;j<n;j++)
            f[index[j]]=1;
        printf("Allocated\n");
        printf("File Indexed\n");
        for(k=0;k<n;k++)
            printf("%d-------->%d : %d\n",ind,index[k],f[index[k]]);
    }
    else
    {
        printf("File in the index is already allocated \n");
        printf("Enter another file indexed");
        goto y;
    }
    printf("Do you want to enter more file(Yes - 1/No - 0)");
    scanf("%d", &c);
    if(c==1)
        goto x;
    else
        exit(0);
    getch();
}
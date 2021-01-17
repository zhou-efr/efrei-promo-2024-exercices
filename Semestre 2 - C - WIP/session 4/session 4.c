//
// Created by thepa on 18/01/2021.
//

#include "session 4.h"
#include <stdio.h>
#include <stdlib.h>

int* localVar1(int x)
{
    int y;
    printf("x's adress = %p\n", &x);
    printf("y's adress = %p\n", &y);
    return &y;
}

int intAsking()
{
    int answerType, answer;
    do{
        printf("enter an integer : \n");
        answerType = scanf("%d", &answer);
    } while (answerType == 0);
    return answer;
}

double add(double x, double y)
{
    return x+y;
}

double sub(double x, double y)
{
    return x-y;
}

double mul(double x, double y)
{
    return y*x;
}

double divi(double x, double y)
{
    if (y != 0)
    {
        return x/y;
    }else{
        return 0;
    }
}

double cal(double x, double y, char op)
{
    switch(op)
    {
        case '+':
            return add(x, y);
            break;
        case '-':
            return sub(x, y);
            break;
        case '*':
            return mul(x, y);
            break;
        case '/':
            return divi(x, y);
            break;
        default:
            return 0;
            break;
    }
}
//0.0.0.
void printArray(int *tab, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("value at position %d = %d \n", i, *(tab+i));
    }
}

//4.1.1.
int * createArray(int length)
{
    return (int*)calloc(length,sizeof(int));
}

//4.1.2.
void createArrayBis(int **tab, int length)
{
    *tab = (int*)calloc(length,sizeof(int));
}

//4.1.3.
void fillArray(int *tab, int length)
{
    for(int i = 0; i < length; i++)
    {
        printf("give the number at position %d : ", i);
        scanf("%d", (tab + i));
    }
}

//4.2.1.
int ** create_2darray(int L, int C)
{
    int **ar2D = (int**)malloc(L*sizeof(int*));
    for(int i = 0; i < L ; i++)
    {
        *(ar2D + i) = (int*)calloc(C, sizeof(int));
    }
    return ar2D;
}

//4.2.4.
void print2Darray(int **A, int L, int C)
{
    for(int i = 0; i<L; i++)
    {
        for(int j = 0; j < C; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

//4.2.1.
void create_2darray_bis(int ***A, int L, int C)
{
    *A = (int**)malloc(L*sizeof(int*));
    for(int i = 0; i < L ; i++)
    {
        *(*A + i) = (int*)calloc(C, sizeof(int));
    }
}

//4.2.3.
void fill_2d_array(int **A, int L, int C)
{
    for(int i = 0; i<L; i++)
    {
        for(int j = 0; j < C; j++)
        {
            printf("enter the value at position (%d, %d) : ", i, j);
            scanf("%d", &(A[i][j]));
        }
        printf("\n");
    }
}

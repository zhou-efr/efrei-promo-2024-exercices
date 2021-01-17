//
// Created by thepa on 18/01/2021.
//

#include "session 3.h"
#include <stdio.h>
#include <stdlib.h>

int* filler(int size)
{
    int *array = (int*) calloc(size, sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("enter the value at position %d : \n", i);
        scanf("%d",(array+i));
    }
    return array;
}
int minimum(int *array, int size)
{
    int minimum = *array;
    for (int i = 1; i < size; i++)
    {
        if(*(array+i) < minimum)
        {
            minimum = *(array+i);
        }
    }

    return minimum;
}

float average(int *array, int size)
{
    float average = 0;
    for (int i = 0; i < size; i++)
    {
        average += *(array+i);
    }
    return average/size;

}

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\tat position %d the value is %d\n", i, *(array+i));
    }
}

int searchEngine(int *array, int size, int value)
{
    int position = -1, i = 0;
    while (position < 0 && i < size)
    {
        if (*(array+i) == value)
        {
            position = i;
        }
        i++;
    }
    return position;
}

int *searchEngineV2(int *array, int size, int value)
{
    int *positions = (int*) calloc(size+1, sizeof(int));
    *(positions+size) = -1;
    for(int i = 0; i < size; i++)
    {
        if (*(array+i) == value)
        {
            *(positions+size) += 1;
            *(positions+(*(positions+size))) = i;
        }
    }
    *(positions+size) += 1;
    return positions;
}

int sorted(int *array, int size)
{
    int ok = 1, i = 1;
    while (ok == 1 && i < size)
    {
        if (*(array+i) < *(array+i-1))
        {
            ok = 0;
        }
        i++;
    }
    return ok;
}

void sortInt(int *array, int SIZE, int begin)
{
    if (SIZE <= begin){return;}

    int p = array[SIZE-1], j = begin, buff;

    for (int i = begin; i < SIZE; i++)
    {
        if (array[i] <= p)
        {
            buff = array[j];
            array[j] = array[i];
            array[i] = buff;

            j++;
        }

    }
    sortInt(array, j-2, begin);
    sortInt(array, SIZE, j);
}

void insert(int *array, int SIZE, int value)
{
    array = (int*)realloc(array, (SIZE+1)*sizeof(int));
    *(array+SIZE) = value;
    sortInt(array, SIZE, 0);
}

void shift(int *array, int size)
{
    int buff = *(array+size-1);
    for (int i = 1; i < size; i++)
    {
        *(array+size-i) = *(array+size-i-1);
    }
    *array = buff;
}

int pop(int *array, int *size, int value)
{
    int shift = 0, index = -1;
    for (int i = 0; i < *size; i++)
    {
        if(*(array+i) == value && index < 0){
            shift++;
            index = i;
        }
        *(array+i)=*(array+i+shift);
    }
    *size-= shift;
    array = (int *)realloc(array, *size*sizeof(int));
    return index;
}

int *fusion(int *array, int size, int *array2, int size2)
{
    int *fusionTab = (int *)calloc((size+size2), sizeof(int));
    int i;
    for ( i = 0; i < size; i++)
    {
        *(fusionTab+i) = *(array+i);
    }

    for(int j = i; j < size2; j++)
    {
        *(fusionTab+j) = *(array2+j-i);
    }

    return fusionTab;
}

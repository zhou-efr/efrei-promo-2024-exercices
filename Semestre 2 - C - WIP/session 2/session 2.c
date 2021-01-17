//
// Created by thepa on 18/01/2021.
//

#include "session 2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fillAndDisplay()
{
    int size, buffer;
    printf("enter the size of the array you want's to fill : ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("\n  Enter a integer : ");
        scanf("%d", &buffer);
        array[i] = buffer;
    }

    printf("array {\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
    printf("}\n");
}

int minimum(int array[], int size)
{
    int minimum = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < minimum){
            minimum = array[i];
        }
    }
    return minimum;
}

double averageOf(int value[], int size)
{
    double average = 0.0;
    for (int i = 0; i < size; i++)
    {
        average += value[i];
    }
    return average/size;
}

int research(int value[], int size, int searched)
{
    int i = 0, position = -1;
    while ((i < size) && (position == -1)){
        if (value[i] == searched){
            position = i;
        }
        i++;
    }
    return position;
}

int numberOf(int searched, int value[], int size)
{
    int i = 0, occurence = 0;
    while (i < size){
        if (value[i] == searched){occurence++;printf("at position %d \n", i);}
        i++;
    }
    return occurence;
}

int *insert(int array[],const int size, int value)
{
    int i = 0;
    static int new[100];
    while((i < size) && (array[i] < value)){
        new[i] = array[i];
        i++;
    }

    new[i] = value;
    while(i < size){
        new[i+1] = array[i];
        i++;
    }

    return new;
}

int isSorted(int value[], int size)
{
    int i = 1;
    while (i < size){
        if(value[i-1] > value[i]){
            return 0;
        }
        i++;
    }
    return 1;
}

char *shift(char str[], int size)
{
    static char buffer[100];
    buffer[0] = str[size];
    for (int i = 0; i < size-1; i++)
    {
        buffer[i+1] = str[i];
    }
    printf("%s", buffer);
    return &buffer;
}

int longest(int value[], int size)
{
    int maximun = 0, counter = 0, index;
    for (int i = 0; i < size; i++)
    {
        if(value[i] == 1){
            if (counter > maximun){
                maximun = counter;
                index = i-counter;
            }
            counter = 0;
        }else if(value[i] == 0){
            counter ++;
        }
    }
    return index;
}

int exactComparison(int array[], int array2[], int SIZE, int SIZE2)
{
    if (SIZE != SIZE2){return 0;}

    int i = 0;

    while ((i < SIZE) && (array[i] == array2[i]))
    {
        i++;
    }

    if (i == SIZE){
        return 1;
    }else{
        return 0;
    }
}

int comparison(int array[], int array2[], int SIZE, int SIZE2)
{
    if (SIZE != SIZE2){return 0;}

    int i = 0;

    while ((i < SIZE) && (research(array2, SIZE2, array[i]) != -1))
    {
        i++;
    }

    if (i == SIZE){
        return 1;
    }else{
        return 0;
    }
}

int *removeOne(int array[], int SIZE, int value)
{
    static int buffer[100];
    int j = 1;
    for (int i = 0; i < SIZE; i++)
    {
        if ((array[i] != value) || ((j-1) < i))
        {
            buffer[j] = array[i];
            j++;
        }
    }
    buffer[0] = j;
    return buffer;
}

int *removeValue(int array[], int SIZE, int value)
{
    static int buffer[100];
    int j = 1;
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] != value)
        {
            buffer[j] = array[i];
            j++;
        }
    }
    buffer[0] = j;
    return buffer;
}

int *add(int array[], int array2[], int SIZE, int SIZE2){
    static int buffer[100];
    buffer[0] = SIZE+SIZE2;
    int j = 0, k = 0;
    for (int i = 1; i < SIZE+SIZE2+1; i++)
    {
        if ((j < SIZE) && ((k > SIZE2) || (array[j] < array[k])))
        {
            buffer[i] = array[j];
            j++;
        }else
        {
            buffer[i] = array2[k];
            k++;
        }
    }
    return buffer;
}

void sortInt(int *array, int SIZE, int begin)
//for reason of clarity, I haven't found this methode by myself (dichotomy isn't my strong point) however I've fully understand it and I'm able to redo it without support (I think's xD)
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

/*void addWord(char dictionnary[][][], char *word)
{
    if()
    if ((word[0] >= 97 && word[0] < 97+26)||(word[0] >= 65 && word[0] < 65+26))
    {
        if (word[0] < 97)
        {
            word[0] += 32;
        }

        int i = 100;
        while (i > 0)
        {
            i--;
            if (dictionnary[word[0]][i] != "")
            {
                dictionnary[word[0]][i+1] = dictionnary[word[0]][i];
                if (dictionnary[word[0]][i+1][1] < word[1])
                {

                }
            }
        }



    }else{
        printf("uncorrect word\n");
    }

}*/

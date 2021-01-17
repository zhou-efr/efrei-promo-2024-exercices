//
// Created by zhou on 18/01/2021.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./session 2/session 2.h"
#include "./session 3/session 3.h"
#include "./session 4/session 4.h"
#include "./session 5/classroom.h"
#include "./session 5/Date.h"
#include "./session 5/student.h"
#include "./session 5/fileinteractions.h"



int main_session_2()
{
    printf("\n\n\n");
    //PART 1 : One dimension arrays
    // exercice n*1
    //fillAndDisplay();

    printf("let an array filled from 0 to 9 \n");
    const int SIZE = 10, SIZE2 = SIZE + 1;
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, *array2;
    //exercice n*2
    int min = minimum(array, SIZE);
    printf("the minimum of the array is %d \n", min);

    //exercice n*3
    double ave = averageOf(array, SIZE);
    printf("the average of the array is %f \n", ave);

    //exercice n*4
    int value = 5, searched = research(array, SIZE, value);
    printf("the value %d is at position %d in the array \n", value, searched);

    //exercice n*5
    int number = numberOf(value, array, SIZE);
    printf("the value %d is %d times in the array \n", value, number);

    //exercice n*6
    array2 = insert(array, SIZE, 10);
    printf("array with 10 inserted = { ");
    for (int i = 0; i < SIZE+1; i++)
    {
        printf("%d ", *(array2 + i));
    }
    printf("}\n");

    //exercice n*7
    int sorted = isSorted(array2, SIZE2);
    printf("array2 %s sorted \n", sorted? "is":"isn't");

    //exercice n*8
    const int SIZE_OF_STR = 10;
    char string[] = "phase shift";
    char *gnirts = shift(string, SIZE_OF_STR);
    printf("the string \"%s\" become \"%s\" after the shift \n", string, gnirts);

    //exercice n*9
    printf("let's an array full of 0 and 1\n");
    int binnaryArray[144] = {0,1,1,0,0,0,1,1, 0,0,1,0,0,0,0,0, 0,1,1,0,1,1,0,0, 0,1,1,0,0,0,0,1, 0,1,1,0,1,1,1,0, 0,1,1,0,0,1,1,1, 0,1,1,1,0,1,0,1, 0,1,1,0,0,0,0,1, 0,1,1,0,0,1,1,1, 0,1,1,0,0,1,0,1, 0,0,1,0,0,0,0,0, 0,1,1,0,1,0,0,1, 0,1,1,1,0,0,1,1, 0,0,1,0,0,0,0,0, 0,1,1,0,0,0,1,1, 0,1,1,1,0,0,1,0, 0,1,1,0,0,0,0,1, 0,1,1,1,0,0,0,0};
    int position = longest(binnaryArray, 144);
    printf("the beginning position of the longest consecutive series of zeros is %d \n", position);

    //exercice n*10
    int same = exactComparison(array, array2, SIZE, SIZE2);
    printf("array and array2 %s same \n", same? "are" : "aren't");

    //exercice n*11
    same = comparison(array, array2, SIZE, SIZE2);
    printf("array and array2 %s the same values \n", same? "have" : "have not");

    //exercice n*12
    int *array3 = removeOne(array2, SIZE2, 5);
    printf("let array3 { ");
    for (int i = 1; i < *array3; i++)
    {
        printf("%d ", *(array3 + i));
    }
    printf("}\n");

    //exercice n*13
    int *array4 = removeValue(array, SIZE, 5);
    printf("let array4 { ");
    for (int i = 1; i < *array4; i++)
    {
        printf("%d ", *(array4 + i));
    }
    printf("}\n");

    //exercice n*14
    int *array5 = add(array, array2, SIZE, SIZE2);
    printf("let array5 { ");
    for (int i = 1; i < *array5 + 1; i++)
    {
        printf("%d ", *(array5 + i));
    }
    printf("}\n");

    //exercice n*15
    printf("I don't understant the question\n");
    //excercire n*16
    printf("let an not sorted array and sort it : \n");
    const int SIZE6 = 10;
    int bufferArray[] = {2, 5, 9, 1, 6, 4, 8, 7, 3, 0};
    int *array6 = &bufferArray[0];

    printf("array 6 non sorted : { ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array6[i]);
    }
    printf("}\n");

    sortInt(array6, SIZE6, 0);

    printf("array 6 sorted : { ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", array6[i]);
    }
    printf("}\n");

    printf("\n\n\n");
    //PART 2 : strings
    //exercice 1
    char phrase[] = "messy panda in sight";
    const int STR_SIZE = strlen(phrase);
    printf("Size of \"%s\" is %d \n", phrase, STR_SIZE);
    //exercice 2
    char word1[] = "panda", word2[1];
    strcpy(word2, word1);
    printf("original variable : \"%s\" , copied one : \"%s\" \n", word1, word2);
    //exercice 3
    char word3[] = "panda ", word4[] = "are awesome";
    strcat(word3, word4);
    printf("%s\n", word3);
    //exercire 4
    if (strcmp(word1, word3) == 0){
        int i = 0;
        while (i < strlen(word1) && word1[i] == word2[i])
        {
            i++;
        }
        if (i == strlen(word1))
        {
            printf("the strings are sames\n");
        }else{
            printf("the two strings are differents\n");
        }


    } else {
        printf("the two strings are differents\n");
    }
    //exercice 5
    char word3up[strlen(word3)];
    for (int i = 0; i < strlen(word3); i++)
    {
        if (word3[i] >= 97 && word3[i] <= 123){
            word3up[i] = word3[i] - 32;
        }else{
            word3up[i] = word3[i];
        }
    }
    printf("%s\n", word3up);
    //exercice 6
    printf("%s\n", word4);
    char *word5 = (char*)calloc(strlen(word4), sizeof(char));
    for (int i = 0; i < strlen(word4); i++)
    {
        word5[i] = word4[strlen(word4) - i - 1];
    }
    printf("%s\n", word5);

    //exercice 7
    int cnt = 0, maxlen = (strlen(word4) > strlen(word3))? strlen(word4) : strlen(word3), minlen = (strlen(word4) < strlen(word3))? strlen(word4) : strlen(word3);
    char *maxOne = (strlen(word4) > strlen(word3))? word4 : word3, *minOne = (strlen(word4) < strlen(word3))? word4 : word3;
    for (int i = 0; i < maxlen; i++)
    {
        cnt = ((cnt < minlen) && (maxOne[i] == minOne[cnt]))? cnt+1 : 0;
    }

    printf("%s\n", word4);
    printf("%s\n", word3);
    if (minlen == cnt)
    {
        printf("it's a subString\n");
    }else{
        printf("it's not a subString\n");
    }

    //exercice 8
    char word6[] = "kayak", *word6reversed = (char*)calloc(strlen(word6), sizeof(char));
    for (int i = 0; i < strlen(word6); i++)
    {
        word6reversed[i] = word6[strlen(word6) - i - 1];
    }

    int isItSame = 0;

    if (strcmp(word6reversed, word6) == 0){
        int i = 0;
        while (i < strlen(word6reversed) && word6reversed[i] == word6[i])
        {
            i++;
        }
        if (i == strlen(word6reversed)){isItSame = 1;}
    }

    printf("%s %s a palindrome \n", word6, isItSame? "is" : "isn't");

    //exercice 9
    int passed = 0, j = 0, k = 0, alphabet[2][26] = {{97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
    for (int i = 0; i < strlen(word3); i++)
    {
        passed = 0;
        j = 0;
        while(j < 26)
        {
            if (word3[i] == alphabet[0][j])
            {
                alphabet[1][j] ++;
                passed = 1;
            }
            j++;
        }

    }
    passed = alphabet[1][0];
    while (j < 26)
    {
        if (passed < alphabet[1][j])
        {
            passed = alphabet[1][j];
            k = j;
        }
        j++;
    }
    printf("%c is present %d times\n", (char)alphabet[0][k], passed);

    //exercice 10
    char str[] = "bruh";
    printf("size of bruh is %d", (int)((sizeof(str)/sizeof(char))-1)); //minus 1 for the /0 char

    //exercice 11
    char str2[] = "panda is live, mario sunshine the best mario";
    int counter = 0;
    for (int i = 0; i < (sizeof(str2)/sizeof(char)); i++)
    {
        if (str2[i] == ' ')
        {
            counter ++;
        }

    }
    if (str2[(sizeof(str2)/sizeof(char))-1] != ' ')
    {
        counter ++;
    }
    printf("the sentence \"%s\" has %d words", str2, counter);
    //exercice 12
    char dictionnary[26][100][28]; //biggest word on english


    //PART 3 : Two dim array
    //setup
    printf("\n\n\n");
    //exercice 1
    int sizeX, sizeY;
    printf("enter the size x of your matrice : ");
    scanf("%d", &sizeX);
    printf("enter the size y of your matrice : ");
    scanf("%d", &sizeY);
    int tab[100][100];
    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            printf("enter the value at coordinate %d;%d: ", i, j);
            scanf("%d", &tab[j][i]);
        }
    }

    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            printf("%d ", tab[j][i]);
        }
        printf("\n");
    }
    //exercice 2
    int nSize;
    printf("enter the size of your matrice : ");
    scanf("%d", &nSize);
    int tab2[nSize][nSize]; // I know how to use calloc and because i'm lazy I don't use it

    for (int i = 0; i < nSize; i++)
    {
        for (int j = 0; j < nSize; j++)
        {
            printf("enter the value at coordinate %d;%d: ", i, j);
            scanf("%d", &tab2[j][i]);
        }
    }
    for (int i = 0; i < nSize; i++)
    {
        for (int j = 0; j < nSize; j++)
        {
            printf("%d ", tab2[j][i]);
        }
        printf("\n");
    }
    // do u like pandas ?
    //exercice 3
    printf("enter the size of your pascal triangle : ");
    scanf("%d", &nSize);
    int tab3[nSize][nSize]; // I know how to use calloc and because i'm lazy I don't use it
    tab3[0][0] = 1;
    printf("%d \n", tab3[0][0]);
    for (int i = 1; i < nSize; i++)
    {
        tab3[i][0] = 1;
        printf("%d ", tab3[i][0]);
        tab3[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            tab3[i][j] = tab3[i-1][j-1]+ tab3[i-1][j];
            printf("%d ", tab3[i][j]);
        }
        printf("%d ", tab3[i][i]);
        printf("\n");
    }
    //exercice 4
    int tab4[2][2] = {{1, 3}, {1, 3}};
    printf("the matrix sum of two matrix  [[1, 3], [1, 3]] is \n");
    for (int i = 0; i < 2; i++){

        for (int j = 0; j < 2; j++)
        {
            tab4[i][j] = tab4[i][j] + tab4[i][j];
            printf("%d ", tab4[i][j]);
        }
        printf("\n");
    }
    //exercice 5
    //(a)
    printf("the transposition of the previous matrix is : \n");
    int tab5[2][2] = {{0,0}, {0,0}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            tab5[i][j] = tab4[j][i];
            printf("%d ", tab5[i][j]);
        }
        printf("\n");
    }
    //(b)
    printf("the transposition of the previous matrix is : \n");
    int sizeTab5 = 2, buff = 0;
    for (int i = 1; i < sizeTab5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            buff = tab5[i][j];
            tab5[i][j] = tab5[j][i];
            tab5[j][i] = buff;
        }

    }
    for (int i = 0; i < sizeTab5; i++)
    {
        for (int j = 0; j < sizeTab5; j++)
        {
            printf("%d ", tab5[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}

int main_session_3(){
    //1. Pointers
    printf("1. Pointers");
    //1.(a)
    printf("i : %d\n", 14);
    printf("ii : %d\n", 34);
    printf("iii : %d\n", 2805);
    printf("iv : %d\n", 5001);
    printf("v : %d\n", 5003);
    printf("vi : %d\n", 7);
    printf("vii : %d\n", 5002);
    printf("viii : %d\n", 23);
    printf("ix : %d\n", 33);
    printf("x : %d\n", 450);
    //1.(b)
    int A[9]={12,23,34,45,56,67,78,89,90};
    int *p;
    p=A;
    printf("%d\n",*(p+2));
    printf("%d\n",&p+1);
    printf("%d\n",&A[4]-3);
    printf("%d\n",A+3);
    printf("%d\n",&A[7]-p);
    printf("%d\n",p+(*p-10));
    printf("%d\n",*(p+*(p+8)-A[7]));
    printf("%d\n",(*(&p))[5]-(*(&p))[2]);
    printf("%d\n",*(*(&p)+3)*(*(*(&p)+1)-13));
    //2. dynamic allocation
    printf("\n2. dynamic allocation");
    //1 One dimension arrays
    printf("\n\t1. one dimension arrays");
    printf("\nexercice n 1 : array's filler \n");
    int *array, size;
    do
    {
        printf("give the size of the wanted array : \n");
        scanf("%d", &size);
    } while (size <= 0);
    array = filler(size);
    printf("you're given the following array : \n");
    printArray(array, size);

    printf("\nexercice n 2 : array's minimum \n");
    printf("\tthe minimum of your array is : %d\n", minimum(array, size));

    printf("\nexercice n 3 : array's average\n");
    printf("\tthe average of your array is : %f\n", average(array, size));

    printf("\nexercice n 4 : search engine\n");
    int ex4_value;
    printf("enter the value you're searching for : ");
    scanf("%d", &ex4_value);
    int ex4_occurence = searchEngine(array, size, ex4_value);
    if (ex4_occurence >= 0)
    {
        printf("\tthe value %d is at position %d \n", ex4_value,ex4_occurence);
    }else{
        printf("\tthe value %d isn't in the array\n", ex4_value);
    }

    printf("\nexercice n 5 : occurences");
    int ex5_value;
    printf("\nenter the value you're searching for : \n");
    scanf("%d", &ex5_value);
    int *ex5_occurence = searchEngineV2(array, size, ex5_value);
    int ex5_size = *(ex5_occurence+size);
    if (*ex5_occurence >= 0)
    {
        printf("\tthe value %d is : \n", ex5_value);
        for (int j = 0; j < *(ex5_occurence+size); j++)
        {
            printf("\t\tat position %d\n", *(ex5_occurence+j));
        }

    }else{
        printf("\tthe value %d isn't in the array\n", ex5_value);
    }

    printf("\n\nexercice n 6 : is the given array is sorted ?");
    printf("\n\tthe given array %s sorted", sorted(array, size)?"is":"isn't");

    printf("\n\nexercice n 7 : insert \n");
    insert(array, size, 6);
    size ++;
    printf("6 is insert: \n");
    printArray(array, size);

    printf("\n\nexercice 8 : shift");
    printf("\nthe given array will be shifted\n");
    shift(array, size);
    printArray(array, size);

    printf("\n\nexercice n 9 : remove the first occurence\n");
    int ex9_value = 5;
    int ex9_index = pop(array, &size, ex9_value);
    if(ex9_index >= 0)
    {
        printArray(array, size);
    }else{
        printf("the value %d isn't in the array\n", ex9_value);
    }

    printf("\n\nexercice n 10 : array's fusion");
    int *ex10_tab = ex5_occurence, ex10_size = ex5_size, ex10_sizeTab = ex10_size + size;
    int *ex10_fusionTab = fusion(array, size, ex10_tab, ex10_size);
    printArray(ex10_fusionTab, ex10_sizeTab);

    //3. two dimension arrays
    printf("\n\nexercice n 11 : 2nd order filler");
    int sizeX, sizeY;
    printf("\n\tenter the x size of your array : ");
    scanf("%d", &sizeX);
    printf("\n\tenter the y size of your array : ");
    scanf("%d", &sizeY);

    int **scndArray = (int**)calloc(sizeX, sizeof(int));
    for (int i = 0; i < sizeX; i++){*(scndArray+i) = (int*)calloc(sizeY, sizeof(int));}

    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            printf("\nenter the value at position (%d,%d) : " ,i, j);
            scanf("%d", (((scndArray+i)+j)));
        }

    }

    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            printf("\nthe value at position (%d,%d) : " ,i, j);
            printf("%d", *(((scndArray+i)+j)));
        }

    }



    free(array);
    for (int i = 0; i < sizeX; i++){free((scndArray+i));}
    free(scndArray);
    free(ex5_occurence);
    free(ex10_tab);
    return 0;
}

int main_session_4(){
    //PART 1 : warming up
    /*1.
        printf("1.1.\n");
        printf("you had entered : %d\n", intAsking());
        */
    //2.
    printf("1.2.\n");
    printf("4 + 5 = %d", (int)cal(4, 5, '+'));
    //PART 2 : Local variables
    //1.
    printf("2.1.\n");
    int x, y;

    printf("x's adress in main = %p\n", &x);
    printf("y's adress in main = %p\n", &y);

    printf("y's adress return from function = %p\n", localVar1(x));
    //PART 4 : Function and dynamical allocation
    //1. One dimensional array
    printf("4.1.1. \n");
    int *array, length = 5;
    array = createArray(length);
    printArray(array, length);
    free(array);

    printf("4.1.2. \n");
    length++;
    createArrayBis(&array, length);
    printArray(array, length);

    printf("4.1.3. \n");
    fillArray(array, length);

    printf("4.1.4. \n");
    printArray(array, length);

    free(array);
    //2. Two dimensional array
    printf("4.2.1. \n");
    int **array2;
    array2 = create_2darray(5, 5);
    print2Darray(array2, 5, 5);

    free(array2);

    printf("4.2.2. \n");
    int L = 3, C = 3;
    create_2darray_bis(&array2, L, C);
    print2Darray(array2, L, C);

    printf("4.2.3 \n");
    fill_2d_array(array2, L, C);

    printf("4.2.3 \n");
    print2Darray(array2, L, C);

    free(array2);
    printf("---end---");
    return 0;
}

int main_session_5(){
    Classroom* classM =(Classroom*)malloc(sizeof(Classroom));
    readClass(classM);
    displayClass(classM);
    printf("\nthe best average is : %f\n",bestAverage(classM->students,classM->nbStud));
    printf("\nthe youngest student is : \n");
    displayStudent(classM->students[youngestStudent(classM->students,classM->nbStud)]);

    freeClassStud(classM);
    return 0;
}

int main()
{
    main_session_2();
    main_session_3();
    main_session_4();
    main_session_5();
}

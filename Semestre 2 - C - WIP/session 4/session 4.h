//
// Created by thepa on 18/01/2021.
//

#ifndef TD_EN_C_SESSION_4_H
#define TD_EN_C_SESSION_4_H
int intAsking();
double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double divi(double x, double y);
double cal(double x, double y, char op);
int* localVar1(int x);

//0.0.0.
void printArray(int *tab, int length);

//4.1.1.
int * createArray(int length);
//4.1.2.
void createArrayBis(int **tab, int length);
//4.1.3.
void fillArray(int *tab, int length);
//4.2.1.
int ** create_2darray(int L, int C);
//4.2.4.
void print2Darray(int **A, int L, int C);
//4.2.2.
void create_2darray_bis(int ***A, int L, int C);
//4.2.3.
void fill_2d_array(int **A, int L, int C);
#endif //TD_EN_C_SESSION_4_H

#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "Date.h"
#include "classroom.h"

void readArrayStudents(Student ** A, int N){
    for(int i = 0; i < N; i++){
        A[i] = (Student*)malloc(sizeof(Student));
        readStudent(A[i]);
    }
}
void displayArrayStudents(Student **A, int N){
    for(int i = 0; i < N; i++){
        displayStudent(A[i]);
    }
}
float averageArrayStudents(Student ** A, int N){
    float av = 0;

    for(int i = 0; i < N; i++){
        av +=A[i]->average;
    }
    av /= (float)N;
    return av;
}
float bestAverage(Student ** A, int N){
    float av = (*A)->average;
    for(int i = 1; i < N; i++){
        if(av < (*(A+i))->average){
            av = (*(A+i))->average;
        }
    }
    return av;
}
int youngestStudent(Student ** A, int N){
    int id = 0;
    Date *d = &((*A)->bdate);
    for(int i = 1; i < N; i++){
        if(compareDates(d, &((*(A+i))->bdate))<0){
            d = &((*(A+i))->bdate);
            id = i;
        }
    }
    return id;
}
void readClass(Classroom* c){
    printf("||classroom loader||\n");
    printf("enter the number of student in your call : ");

    do{
        scanf("%d", &(c->nbStud));
    }while (c->nbStud < 1);
    fflush(stdin);

    c->students = (Student**)malloc(c->nbStud*sizeof(Student*));

    readArrayStudents(c->students, c->nbStud);

    c->average = averageArrayStudents(c->students, c->nbStud);
}
void displayClass(Classroom* c){
    printf("\nclassroom of %d students:\n", c->nbStud);
    for(int i = 0; i < c->nbStud; i++){
        printf("\n");
        displayStudent(*(c->students+i));
    }
    printf("average of the classroom:%f\n", c->average);
}
void freeClassStud(Classroom* c){
    for(int i = 0; i < c->nbStud; i++){
        free(*(c->students+i));
    }
    free(c->students);
    free(c);
}

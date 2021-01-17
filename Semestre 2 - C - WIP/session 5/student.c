#include <stdio.h>
#include <stdlib.h>
#include "Date.h"
#include "student.h"

void readStudent(Student* s){
    printf("\n||Student loader||\n");

    printf("enter the first name (30 char maximum): ");
    scanf("%s", s->fname);
    fflush(stdin);

    printf("enter the last name (30 char maximum): ");
    scanf("%s", s->lname);
    fflush(stdin);

    printf("enter the birthday date : \n");
    readDate(&(s->bdate));
    fflush(stdin);

    printf("enter the student's number : ");
    scanf("%ld", &(s->numstud));
    fflush(stdin);

    printf("enter the student's average : ");
    scanf("%f", &(s->average));
    fflush(stdin);
}

void displayStudent(Student* s){
    printf("Student : %s %s \n", s->lname, s->fname);
    printf("\tbirthday : ");
    displayDate(&(s->bdate));
    printf("\tstudent's number : %ld\n", s->numstud);
    printf("\tstudent's average : %f\n", s->average);
}

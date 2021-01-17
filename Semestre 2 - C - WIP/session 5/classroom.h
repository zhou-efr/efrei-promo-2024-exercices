#ifndef CLASSROOM_H_INCLUDED
#define CLASSROOM_H_INCLUDED

#include "student.h"

typedef struct{
    Student **students;
    int nbStud;
    float average;
}Classroom;

void readArrayStudents(Student ** A, int N);
void displayArrayStudents(Student **A, int N);
float averageArrayStudents(Student ** A, int N);
float bestAverage(Student ** A, int N);
int youngestStudent(Student ** A, int N);
void readClass(Classroom*);
void displayClass();
void freeClassStud(Classroom*);

#endif // CLASSROOM_H_INCLUDED

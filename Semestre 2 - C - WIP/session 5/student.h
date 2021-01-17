#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include "Date.h"

typedef struct {
    char fname[30];
    char lname[30];
    Date bdate;
    long numstud;
    float average;
}Student;

void readStudent(Student* s);
void displayStudent(Student* s);

#endif // STUDENT_H_INCLUDED

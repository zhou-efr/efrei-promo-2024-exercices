#ifndef FILEINTERACTIONS_H
#define FILEINTERACTIONS_H

#include "Date.h"
#include "student.h"
#include "classroom.h"

void storeStudent(Student* s, char const file[], int charSize);
Student* getStudent();
void errorFileNotFound(FILE *fp);

#endif // FILEINTERACTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Date.h"
#include "student.h"
#include "classroom.h"
#include "fileinteractions.h"

void storeStudent(Student* s, char const file[], int charSize){
    FILE* sFile;
    char filename[charSize+4], fileExtension[] = ".txt";

    strcat(filename, file);
    strcat(filename, fileExtension);

    sFile = fopen(filename, "a");

    if(sFile == NULL){perror("file not found"); exit(EXIT_FAILURE);}

    fprintf(sFile, "%s ", s->fname);
    fprintf(sFile, "%s ", s->lname);
    fprintf(sFile, "%ld ", s->numstud);
    fprintf(sFile, "%f ", s->average);
    fprintf(sFile, "%d/%d/%d\n", s->bdate.day, s->bdate.month, s->bdate.year);

    fclose(sFile);
}

void errorFileNotFound(FILE *fp){
    if(fp == NULL){
        perror("Error while opening the file.\n");
        system("pause");
        exit(EXIT_FAILURE);
    }
 }

Student* getStudent(char const file[], int charSize){
    Student* s = (Student*)malloc(sizeof(Student));
    char filename[charSize+4], fileExtension[] = ".txt", *load_buffer = (char*)malloc(30*sizeof(char)), ch;
    char * endPtr;
    FILE *bufferFile;
    int counter = 0, i = 0;

    strcat(filename, file);
    strcat(filename, fileExtension);

    ///file opening
    bufferFile = fopen(filename, "r");
    errorFileNotFound(bufferFile);

    ///file reading
    while((ch = fgetc(bufferFile)) != EOF){
        if(ch != ' ' && ch != (char)10 && ch  != '\n'){
            load_buffer[i] = ch;
            i++;
        }else{
            load_buffer[i] = '\0';
            i = 0;
            switch(counter){
                case 0:
                    strcpy(s->fname, load_buffer);
                    break;
                case 1:
                    strcpy(s->lname, load_buffer);
                    break;
                case 2:
                    s->numstud = strtol(load_buffer, &endPtr, 10);
                    break;
                case 3:
                    s->average = strtof(load_buffer, 10);
                    break;
                case 4:
                    s->bdate = strtodate(load_buffer);
                    break;
            }

            counter++;
            free(load_buffer);
            load_buffer = (char*)malloc(30*sizeof(char));
        }
    }

    fclose(bufferFile);
    return s;
}

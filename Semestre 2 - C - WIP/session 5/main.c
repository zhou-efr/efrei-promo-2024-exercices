#include <stdio.h>
#include <stdlib.h>
#include "Date.h"
#include "student.h"
#include "classroom.h"
#include "fileinteractions.h"

/*
    typedef struct{
        int wheel;
        char color[20];
    }Car;

    void readCar(Car* c){
        do{
            printf("enter the number of wheels : ");
            scanf("%d", &(c->wheel));
        }while(c->wheel < 0);

        printf("Give the color (max 20 char) :  ");
        fflush(stdin);
        scanf("%s", c->color);
        fflush(stdin);
    }

    void printCar(Car* c){
        printf("you have a %s car with %d wheels\n", c->color, c->wheel);
    }
    int main()
    {

        Car *vroum = (Car*)malloc(sizeof(Car));
        readCar(vroum);
        printCar(vroum);
        free(vroum);
        return 0;
    }
*/
/*
int main(){
    Student *lebus = (Student*)malloc(sizeof(Student));
    readStudent(lebus);
    displayStudent(lebus);
    free(lebus);
    return 0;
}
*/

int main(){
    Classroom* classM =(Classroom*)malloc(sizeof(Classroom));
    readClass(classM);
    displayClass(classM);
    printf("\nthe best average is : %f\n",bestAverage(classM->students,classM->nbStud));
    printf("\nthe youngest student is : \n");
    displayStudent(classM->students[youngestStudent(classM->students,classM->nbStud)]);

    freeClassStud(classM);
    return 0;
}

/* //dont't work yet, but the storing work
int main(){
    Student* s1 = (Student*)malloc(sizeof(Student));
    s1 = getStudent("student", 7);
    displayStudent(s1);
}
*/

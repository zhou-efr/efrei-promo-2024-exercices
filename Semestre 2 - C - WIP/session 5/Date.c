#include <stdio.h>
#include <stdlib.h>
#include "Date.h"
#include <math.h>

Date strtodate(char *enteredDate){

    int validation = 0, value = 0, buffer = 10;
    Date d;
    for(int i = 0; i < 10; i++){
        if(i < 6){
            if(enteredDate[i] >= 48 && enteredDate[i] < 58){
                value += (enteredDate[i]-'0')*buffer;
                buffer = (buffer == 10)?1:10;
                if(buffer == 10){
                    switch(validation){
                    case 0:
                        d.month = value;
                        validation ++;
                        value = 0;
                        break;
                    case 1:
                        d.day = value;
                        validation ++;
                        value = 0;
                        break;
                    }
                }
            }
        }else{
            value += (enteredDate[i]-'0')*pow(10, 9-i);
        }
    }
    d.year = value;
    return d;
}

void readDate(Date* d){
    int validation = 0, value = 0, buffer = 10;
    char *enteredDate = (char*)malloc(11*sizeof(char));
    printf("Give the date in the form mm/dd/yyyy :  ");
    fflush(stdin);
    scanf("%s", enteredDate);
    fflush(stdin);

    for(int i = 0; i < 10; i++){
        if(i < 6){
            if(enteredDate[i] >= 48 && enteredDate[i] < 58){
                value += (enteredDate[i]-'0')*buffer;
                buffer = (buffer == 10)?1:10;
                if(buffer == 10){
                    switch(validation){
                    case 0:
                        d->month = value;
                        validation ++;
                        value = 0;
                        break;
                    case 1:
                        d->day = value;
                        validation ++;
                        value = 0;
                        break;
                    }
                }
            }
        }else{
            value += (enteredDate[i]-'0')*pow(10, 9-i);
        }
    }
    d->year = value;
}
void displayDate(Date* d){
    char month[12][20] = {"january", "febuary", "mars", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
    printf("%d %s %d\n", d->day, month[d->month-1], d->year);
}

int compareDates(Date* d1, Date* d2){
    if (d1->year != d2->year)
    {
        return (d1->year > d2->year)?1:-1;
    }else if (d1->month != d2->month)
    {
        return (d1->month > d2->month)?1:-1;
    }else if (d1->day != d2->day)
    {
        return (d1->day > d2->day)?1:-1;
    }
    return 0;
}

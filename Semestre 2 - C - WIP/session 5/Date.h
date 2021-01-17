#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED


typedef struct {
    int day;
    int month;
    int year;
}Date;

void readDate(Date*);
void displayDate(Date*);
int compareDates(Date*, Date*);
Date strtodate(char *enteredDate);

#endif // DATE_H_INCLUDED

//
// Created by thepa on 15/03/2022.
//

#include "prof/SJF.h"
#include "prof/FCFS.h"
#include "prof/MultiProgrammingWithFixedTask.h"
#include "prof/MVT.h"
#include "prof/MVVT.h"

int main(){
    SJF();
    FCFS();
    MPWFT();
    MVT();
    MVVT();
    return 0;
}
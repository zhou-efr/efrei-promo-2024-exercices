cmake_minimum_required(VERSION 3.17)
project(TD_en_C C)

set(CMAKE_C_STANDARD 11)

add_executable(main.c
        "./session 2/session 2.c"
        "./session 2/session 2.h"

        "./session 3/session 3.c"
        "./session 3/session 3.h"

        "./session 4/session 4.c"
        "./session 4/session 4.h"

        "./session 5/classroom.c"
        "./session 5/classroom.h"
        "./session 5/Date.c"
        "./session 5/Date.h"
        "./session 5/fileinteractions.c"
        "./session 5/fileinteractions.h"
        "./session 5/student.c"
        "./session 5/student.h"
        )
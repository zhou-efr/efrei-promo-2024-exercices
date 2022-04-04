cmake_minimum_required(VERSION 3.21)
project(OS C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(src)

add_executable(OS
        src/Main.c
        src/prof/SJF.c src/prof/SJF.h
        src/prof/FCFS.c src/prof/FCFS.h
        src/prof/MultiProgrammingWithFixedTask.c src/prof/MultiProgrammingWithFixedTask.h
        src/prof/MVT.c src/prof/MVT.h
        src/prof/MVVT.c src/prof/MVVT.h
        src/prof/LRU.c src/prof/LRU.h
        src/prof/DeadlockAvoidance.c src/prof/DeadlockAvoidance.h
        src/prof/IndexedFileAllocation.c src/prof/IndexedFileAllocation.h)

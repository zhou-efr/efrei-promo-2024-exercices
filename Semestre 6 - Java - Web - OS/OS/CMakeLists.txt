cmake_minimum_required(VERSION 3.21)
project(OS)

set(CMAKE_CXX_STANDARD 23)

add_executable(OS
        src/SJF.cpp src/SJF.h src/FCFS.cpp src/FCFS.h src/Main.cpp)

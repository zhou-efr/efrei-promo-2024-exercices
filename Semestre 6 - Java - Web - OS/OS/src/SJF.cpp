//
// Created by thepa on 10/03/2022.
//

#include "SJF.h"

#include "FCFS.h"
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <numeric>

int SJF(){
    std::vector<int[3]> processes;

    int nb;

    std::cout << "Enter the number of processes : ";
    std::cin >> nb;
    std::cout << std::endl;

    for (int i = 0; i < nb; ++i) {
        int temp;
        std::cout << "Enter Process Burst Time for process " << i << " : ";
        std::cin >> temp;
        processes.push_back({temp, ((i > 0) ? processes[i-1][1] : 0) + temp, processes.back() + ((i > 0) ? processes[i-1][1] : 0) + temp});
        std::cout << std::endl;
        waiting.push_back(((i > 0) ? processes[i-1][1] : 0) + temp);
        turn.push_back(processes.back() + waiting[i]);
    }

    std::sort(processes.begin(), processes.back());

    for (int i = 0; i < nb; ++i) {
        std::cout << "process[" << i << "] : bt - " << processes.front() << ", wt - " << waiting[i] << ", ta - " << turn[i] << std::endl;
        processes.pop_back();
    }

    auto average = [](std::vector<int> a) {return static_cast<float>(std::reduce(a.begin(), a.end()))/static_cast<float>(a.size());};

    std::cout << "average waiting time : " << average(waiting) << std::endl;
    std::cout << "average turn around time : " << average(turn) << std::endl;
}
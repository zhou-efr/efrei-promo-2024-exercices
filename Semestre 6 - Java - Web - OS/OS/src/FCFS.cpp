//
// Created by thepa on 10/03/2022.
//

#include "FCFS.h"
#include <iostream>
#include <queue>
#include <vector>
#include <numeric>

int FCFS(){
    std::queue<int> processes;
    std::vector<int> waiting, turn;

    int nb;

    std::cout << "Enter the number of processes : ";
    std::cin >> nb;
    std::cout << std::endl;

    for (int i = 0; i < nb; ++i) {
        int temp;
        std::cout << "Enter Process Burst Time for process " << i << " : ";
        std::cin >> temp;
        processes.push(temp);
        std::cout << std::endl;
        waiting.push_back((i > 0) ? waiting[i-1] : 0 + temp);
        turn.push_back(processes.back() + waiting[i]);
    }

    for (int i = 0; i < nb; ++i) {
        std::cout << "process[" << i << "] : bt - " << processes.front() << ", wt - " << waiting[i] << ", ta - " << turn[i] << std::endl;
        processes.pop();
    }

    auto average = [](std::vector<int> a) {return static_cast<float>(std::reduce(a.begin(), a.end()))/static_cast<float>(a.size());};

    std::cout << "average waiting time : " << average(waiting) << std::endl;
    std::cout << "average turn around time : " << average(turn) << std::endl;
}

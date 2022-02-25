package com.tribu.zhou.lab3;

public class EfreiSimulator {
    public static void main(String[] args) {
        int investment = 10000;
        for (int i = 0; i < 10; i++) {
            investment *= 1.05;
        }
        System.out.println("=> " + investment);
    }
}

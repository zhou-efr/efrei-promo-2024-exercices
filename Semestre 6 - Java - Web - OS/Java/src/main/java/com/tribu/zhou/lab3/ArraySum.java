package com.tribu.zhou.lab3;

import java.util.Scanner;

public class ArraySum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] values = new int[100];
        for (int i = 0; i < 100; i++) {
            values[i] = i;
        }
        int sum = 0;
        for (int value:
             values) {
            sum += value;
        }
        System.out.println("=> " + sum);
    }
}

package com.tribu.zhou.lab3;

import java.util.Scanner;

public class NumberOfDays {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] values = {0, 0};
        int[] leap = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int[] not_leap = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        System.out.print("Enter month number : ");
        values[0] = sc.nextInt()-1;
        System.out.print("Enter year : ");
        values[1] = sc.nextInt();

        System.out.println("The month have " + (values[1]%4==0?leap[values[0]]:not_leap[values[0]]) + " days");
    }
}

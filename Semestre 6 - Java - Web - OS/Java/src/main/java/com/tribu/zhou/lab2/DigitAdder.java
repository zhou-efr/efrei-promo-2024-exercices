package com.tribu.zhou.lab2;

import java.util.Scanner;

public class DigitAdder {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter an interger : ");
        String number = sc.nextLine();

        int sum = 0;

        for (int i = 0; i < number.length(); i++) {
            sum += number.charAt(i)-48;
        }

        System.out.println("The sum is : " + sum);
    }
}

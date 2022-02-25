package com.tribu.zhou.lab2;

import java.util.Scanner;

public class DivideByFiveSix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter an integer : ");
        double number = sc.nextInt();

        System.out.println("number % 5 == 0 && number % 6 == 0 => " + (number % 5 == 0 && number % 6 == 0));
        System.out.println("number % 5 == 0 || number % 6 == 0 => " + (number % 5 == 0 || number % 6 == 0));
        System.out.println("number % 5 == 0 xor number % 6 == 0 => " + ((number % 5 == 0 || number % 6 == 0) && !(number % 5 == 0 && number % 6 == 0)));
    }
}

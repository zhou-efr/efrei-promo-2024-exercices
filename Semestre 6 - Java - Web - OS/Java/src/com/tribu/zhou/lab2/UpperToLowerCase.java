package com.tribu.zhou.lab2;

import java.util.Scanner;

public class UpperToLowerCase {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter something : ");
        String line = sc.nextLine();

        System.out.print("In lower case : " + line.toLowerCase());
    }
}

package com.tribu.zhou.lab2;

import java.util.Scanner;

public class IntToChar {
    public static void main(String[] args) {
        System.out.print("Enter a ascii number : ");
        System.out.print("=> " + (char) new Scanner(System.in).nextInt());
    }
}

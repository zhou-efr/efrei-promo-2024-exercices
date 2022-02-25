package com.tribu.zhou.lab2;

import java.util.Scanner;

public class EvenNumber {
    public static void main(String[] args) {
        System.out.print("Enter a number : ");
        System.out.print("=> " + ((new Scanner(System.in).nextInt() % 2 == 0) ? "even" : "odd"));
    }
}

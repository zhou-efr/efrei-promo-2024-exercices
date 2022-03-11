package com.tribu.zhou.lab3;

import java.util.Objects;
import java.util.Scanner;

public class Continue {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String again;
        do {
            System.out.print("(y/n) : ");
            again = sc.nextLine();
        }while (Objects.equals(again, "yes") || Objects.equals(again, "y"));
    }
}

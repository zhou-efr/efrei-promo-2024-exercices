package com.tribu.zhou.lab2;

import java.util.Scanner;

public class Investment {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the investment amount : ");
        double investment_amount = sc.nextDouble();
        System.out.print("Enter the annual interest : ");
        double annual_interest = sc.nextDouble();
        System.out.print("Enter the number of years : ");
        double years = sc.nextDouble();

        System.out.println("Investment value " + investment_amount*(1 + annual_interest/12.0)*years*12.0);
    }
}

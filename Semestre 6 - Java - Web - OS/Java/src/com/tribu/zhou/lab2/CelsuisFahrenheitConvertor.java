package com.tribu.zhou.lab2;

import java.util.Scanner;

public class CelsuisFahrenheitConvertor {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a temperature in fahrenheit : ");
        double fahrenheit = sc.nextFloat();
        double celsius = ((fahrenheit - 32.0) * 5.0 / 9.0);
        System.out.println("\ntemperature un celsius : " + celsius);
    }
}

package com.tribu.zhou.lab2;

import java.util.Scanner;

public class CylinderVolume {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the radius of the cylinder : ");
        double radius = sc.nextDouble();
        System.out.print("Enter the length of the cylinder : ");
        double length = sc.nextDouble();
        double area = radius*radius*3.14;
        double volume = area*length;
        System.out.println("\nCylinder area : " + area);
        System.out.println("\nCylinder volume : " + volume);
    }
}

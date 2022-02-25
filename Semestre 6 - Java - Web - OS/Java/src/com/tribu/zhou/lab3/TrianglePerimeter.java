package com.tribu.zhou.lab3;

import java.util.Arrays;
import java.util.Scanner;

public class TrianglePerimeter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double[] edges = {0, 0, 0};

        System.out.print("Enter first edge : ");
        edges[0] = sc.nextDouble();
        System.out.print("Enter second edge : ");
        edges[1] = sc.nextDouble();
        System.out.print("Enter third edge : ");
        edges[2] = sc.nextDouble();

        Arrays.sort(edges);
        if (edges[0] + edges[1] < edges[2]){
            System.out.println("The triangle isn't valid");
        }else{
            System.out.println("The triangle's perimeter : " + (edges[0] + edges[1] + edges[2]));
        }
    }
}

package com.tribu.zhou.lab3;

import java.util.Arrays;
import java.util.Scanner;

public class SortThreeInteger {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double[] nums = {0, 0, 0};

        System.out.print("Enter a number : ");
        nums[0] = sc.nextDouble();
        System.out.print("Enter a second number : ");
        nums[1] = sc.nextDouble();
        System.out.print("Enter a third number : ");
        nums[2] = sc.nextDouble();

        Arrays.sort(nums);
        System.out.println("=> " + Arrays.toString(nums));
    }
}

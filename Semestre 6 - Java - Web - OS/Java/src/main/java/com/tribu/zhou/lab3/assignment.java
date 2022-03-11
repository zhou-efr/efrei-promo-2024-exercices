package com.tribu.zhou.lab3;

import java.util.Scanner;

public class assignment {
    public static void main(String[] args) {
        System.out.print("Enter the grade : ");
        double grade = new Scanner(System.in).nextDouble();

        String mark = "A+";

        if(grade <= 40){
            mark = "F";
        }else if(grade <= 49){
            mark = "F+";
        }else if(grade <= 54){
            mark = "D";
        }else if(grade <= 64){
            mark = "C";
        }else if(grade <= 69){
            mark = "B";
        }else if(grade <= 74){
            mark = "B+";
        }else if(grade <= 79){
            mark = "A";
        }

        System.out.print("=> " + mark);
    }
}

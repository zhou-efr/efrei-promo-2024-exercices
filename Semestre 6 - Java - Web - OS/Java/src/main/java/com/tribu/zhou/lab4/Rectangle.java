package com.tribu.zhou.lab4;

public class Rectangle {

    private double width;
    private double height;
    private static String color;

    public Rectangle(double width, double height, String color) {
        this.width = width;
        this.height = height;
        Rectangle.color = color;
    }

    public Rectangle() {
        this.width = 0.0;
        this.height = 0.0;
    }

    public static String getColor() {
        return color;
    }

    public static void setColor(String color) {
        Rectangle.color = color;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public double getWidth() {
        return width;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public double findArea() {
        return this.getHeight()*this.getWidth();
    }

    public double findPerimeter() {
        return 2*this.getWidth() + 2*this.getHeight();
    }
}

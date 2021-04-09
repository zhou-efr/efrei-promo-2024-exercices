package com.tdz.zhou.Graphic2;

public class Rectangle extends Shape{
    private int length;
    private int width;

    public Rectangle(int length, int width) {
        this.length = length;
        this.width = width;
    }

    @Override
    public double perimeter() {
        return 0;
    }

    @Override
    public double surface() {
        return 0;
    }
}

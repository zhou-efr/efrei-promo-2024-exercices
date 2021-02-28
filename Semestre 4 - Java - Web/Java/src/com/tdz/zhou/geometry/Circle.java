package com.tdz.zhou.geometry;

public class Circle {
    private double x, y ,r;

    public Circle() {
        this.x = 0;
        this.y = 0;
        this.r = 1;
    }

    public Circle(double x, double y, double r) {
        this.x = x;
        this.y = y;
        this.r = r;
    }

    public double perimeter(){
        return Math.PI*2*this.r;
    }

    public double area(){
        return Math.PI*2*this.r*this.r;
    }

    public String toString(){
        return String.format("(%f, %f, %f)", this.x, this.y, this.r) ;
    }

    public double getX() {
        return x;
    }

    public void setX(double x) {
        this.x = x;
    }

    public double getY() {
        return y;
    }

    public void setY(double y) {
        this.y = y;
    }

    public double getR() {
        return r;
    }

    public void setR(double r) {
        this.r = r;
    }
}

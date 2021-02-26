package com.tdz.zhou.geometry;

public class Point
{
    private double x, y;

    public Point(double nx, double ny)
    {
        x = nx;
        y = ny;
    }

    public double getX()
    {
        return x;
    }
    public void setX(double nx)
    {
        x = nx;
    }

    public double getY()
    {
        return y;
    }
    public void setY(double ny)
    {
        y = ny;
    }

    public String toString()
    {
        return "(" + x + ", " + y + ")";
    }
    public void display()
    {
        System.out.println(toString());
    }
}

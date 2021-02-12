package com.tdz.zhou;

public class Segment {
    private Point _a, _b;

    public Segment(Point a, Point b) {
        _a = a;
        _b = b;
    }
    public Segment(double ax, double ay, double bx, double by) {
        _a = new Point(ax, ay);
        _b = new Point(bx, by);
    }

    public String toString(){
        return "[(" + _a.getX() + ", " + _a.getY() + ") (" + _b.getX() + ", " + _b.getY() + ")]";
    }
    public void display(){
        System.out.println(toString());
    }

    public void setA(Point a)
    {
        _a = a;
    }
    public void setA(double x, double y) {
        _a.setY(y);
        _a.setX(x);
    }
    public Point getA()
    {
        return _a;
    }

    public void setB(Point b)
    {
        _b = b;
    }
    public void setB(double x, double y) {
        _b.setY(y);
        _b.setX(x);
    }
    public Point getB()
    {
        return _b;
    }
}

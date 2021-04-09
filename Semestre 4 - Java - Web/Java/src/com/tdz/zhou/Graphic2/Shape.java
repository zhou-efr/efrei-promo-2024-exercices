package com.tdz.zhou.Graphic2;

public abstract class Shape {
    abstract public double perimeter();
    abstract public double surface();

    public boolean isRatherRound()
    {
        if (surface() >= perimeter() * perimeter() / 16)
            return true;
        return false;
    }

    public void description()
    {
        if (isRatherRound())
            System.out.println(this + "\n spreads out at least like a square");
        else
            System.out.println(this + "\n is less spread out than a square");
    }
}

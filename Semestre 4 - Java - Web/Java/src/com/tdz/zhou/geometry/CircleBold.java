package com.tdz.zhou.geometry;

import java.awt.*;

public class CircleBold extends Circle{
    private Color color;

    public CircleBold(double x, double y, double r, Color color) {
        super(x, y, r);
        this.color = color;
    }

    public String toString(){
        return String.format("(%f, %f, %f, %s)", this.getX(), this.getY(), this.getR(), this.color.toString()) ;
    }

    public Color getColor() {
        return color;
    }

    public void setColor(Color color) {
        this.color = color;
    }
}

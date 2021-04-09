package com.tdz.zhou.Graphic2;

public class Ellipse extends Shape{
    private final int bigAxis;
    private final int smallAxis;

    public Ellipse(int bigAxis, int smallAxis) {
        this.bigAxis = bigAxis;
        this.smallAxis = smallAxis;
    }

    @Override
    public double perimeter() {
        double result = 0;
        double ssquare = smallAxis*smallAxis;
        double bsquare = bigAxis*bigAxis;
        double sin;
        double cos;

        for (int i = 0; i <1000; i++) {
            sin = Math.sin(i * Math.PI / 2000);
            cos = Math.cos(i * Math.PI / 2000);
            result += Math.sqrt(ssquare * sin * sin + bsquare * cos * cos);
        }

        result *= 4 * Math.PI / 2000;
        return result;
    }

    @Override
    public double surface() {
        return Math.PI * smallAxis * bigAxis;
    }

    @Override
    public String toString()
    {
        return ("the ellipses of big axis " + bigAxis + ", of small axis " + smallAxis);
    }
}

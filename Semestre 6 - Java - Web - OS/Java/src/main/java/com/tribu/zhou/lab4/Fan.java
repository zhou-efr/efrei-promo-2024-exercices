package com.tribu.zhou.lab4;

public class Fan {
    private int maxSpeed;
    private boolean on;
    private int radius;
    private String color;

    public Fan() {
        this(0, false, 0, null);
    }

    public Fan(int maxSpeed, boolean on, int radius, String color) {
        this.maxSpeed = maxSpeed;
        this.on = on;
        this.radius = radius;
        this.color = color;
    }

    @Override
    public String toString() {
        return "Fan{" +
                "maxSpeed=" + maxSpeed +
                ", on=" + on +
                ", radius=" + radius +
                ", color='" + color + '\'' +
                '}';
    }

    public boolean isOn() {
        return on;
    }

    public void setOn(boolean on) {
        this.on = on;
    }

    public int getMaxSpeed() {
        return maxSpeed;
    }

    public void setMaxSpeed(int maxSpeed) {
        this.maxSpeed = maxSpeed;
    }

    public int getRadius() {
        return radius;
    }

    public void setRadius(int radius) {
        this.radius = radius;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }
}

package com.tribu.zhou.lab4;

public class Time {

    public int getHours() {
        return (int) Math.round(System.currentTimeMillis()*1000*60*60);
    }

    public int getMin() {
        return (int) Math.round(System.currentTimeMillis()*1000*60);
    }

    public int getSec() {
        return (int) Math.round(System.currentTimeMillis()*1000);
    }
}

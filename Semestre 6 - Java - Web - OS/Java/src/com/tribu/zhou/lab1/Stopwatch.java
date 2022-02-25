package com.tribu.zhou.lab1;

public class Stopwatch {
    private double start_time;
    private double end_time;

    public void start(){
        this.start_time = System.currentTimeMillis();
    }

    public void stop(){
        this.end_time = System.currentTimeMillis();
    }

    public double time_elapsed(){
        return System.currentTimeMillis() - this.start_time;
    }

    public Stopwatch(){
        this.start();
    }

    public double getEnd_time() {
        return this.end_time;
    }

    public void setEnd_time(double end_time) {
        this.end_time = end_time;
    }

    public void setStart_time(double start_time) {
        this.start_time = start_time;
    }

    public double getStart_time() {
        return this.start_time;
    }
}

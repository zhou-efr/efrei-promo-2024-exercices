package com.tdz.zhou.others;

public class Vehicle {
    /**
     * Vehicle
     * - brand
     * - fiscal power
     * - maximal speed
     * - current speed
     * + start
     * + accelerate
     * + forward
     * + backward
     */
    /*
        1. up
        2. the current speed
        3. constructor
        4. fiscal power, maximal speed, name
        5. final
        6. setCurrentSpeed(double speed) : void, getCurrentSpeed() : double
        7. attribute : private/protected, method : public
     */
    private final String brand;
    private final double fiscal_power;
    private final double maximal_speed;
    private double current_speed;
    private static int number;

    public Vehicle(String brand, double max_speed, double fiscal_power)
    {
        this.brand = brand;
        this.maximal_speed = max_speed;
        this.fiscal_power = fiscal_power;
        this.current_speed = 0;
        System.out.println(" ____|~\\_");
        System.out.println("[   _|_|-]");
        System.out.println(" (_)   (_)");
        number++;
    }

    public static int getNumber() {
        return number;
    }

    public static void setNumber(int number) {
        Vehicle.number = number;
    }

    public void start(double initial_speed) {
        System.out.println("vroum");
        this.current_speed = Math.min(initial_speed, maximal_speed);
    }

    public void accelerate(double acceleration) {
        this.current_speed += acceleration;
        this.current_speed = ((this.current_speed >= 0)?1:-1)*Math.min(Math.abs(this.current_speed), maximal_speed);
    }

    public void forward(double acceleration) {
        accelerate(Math.abs(acceleration));
    }

    public void backward(double acceleration) {
        accelerate(-1*Math.abs(acceleration));
    }

    public String getBrand() {
        return brand;
    }

    public double getFiscal_power() {
        return fiscal_power;
    }

    public double getMaximal_speed() {
        return maximal_speed;
    }

    public double getCurrent_speed() {
        return current_speed;
    }

    public void setCurrent_speed(double current_speed) {
        this.current_speed = current_speed;
    }

    public String toString(){
        return "brand : " + getBrand() + "\n\tcurrent speed : " + getCurrent_speed() + "\n\tmax speed : " +
                getMaximal_speed() + "\n\tfiscal power : " + getFiscal_power() + "\n";
    }
}

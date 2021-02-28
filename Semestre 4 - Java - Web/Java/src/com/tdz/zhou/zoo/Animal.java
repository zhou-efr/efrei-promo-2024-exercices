package com.tdz.zhou.zoo;

public class Animal {
    private int weight;
    private String name;

    public Animal()
    {
        this.weight = 85;
        this.name = "panda";
    }

    public Animal(int weight, String name) {
        this.weight = weight;
        this.name = name;
    }

    public int getWeight() {
        return weight;
    }

    public void setWeight(int weight) {
        this.weight = weight;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String toString(){
        return this.name + " weight is " + this.weight + "kg ";
    }
}

package com.tdz.zhou.animals;

public class Dog extends Animal{
    private String owner;

    public Dog() {
        this.weight = 10;
        this.name = "none";
        this.owner = "tdz";
    }

    public Dog(String owner, int weight, String name) {
        this.weight = weight;
        this.name = name;
        this.owner = owner;
    }

    public String getOwner() {
        return owner;
    }

    public void setOwner(String owner) {
        this.owner = owner;
    }

    public String toString(){
        return super.toString() + " own by " + this.owner;
    }
}

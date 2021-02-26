package com.tdz.zhou.animals;

public class Cat extends Animal{
    private final String breed;

    public Cat() {
        this.weight = 10;
        this.name = "none";
        this.breed = "tdz";
    }

    public Cat(String breed, int weight, String name) {
        this.weight = weight;
        this.name = name;
        this.breed = breed;
    }

    public String getBreed() {
        return breed;
    }

    public String toString(){
        return super.toString() + " is a " + this.breed;
    }
}

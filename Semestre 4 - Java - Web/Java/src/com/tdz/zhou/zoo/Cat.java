package com.tdz.zhou.zoo;

public class Cat extends Animal{
    private final String breed;

    public Cat() {
        super(10, "none");
        this.breed = "tdz";
    }

    public Cat(String breed, int weight, String name) {
        super(weight, name);
        this.breed = breed;
    }

    public String getBreed() {
        return breed;
    }

    public String toString(){
        return super.toString() + " is a " + this.breed;
    }
}

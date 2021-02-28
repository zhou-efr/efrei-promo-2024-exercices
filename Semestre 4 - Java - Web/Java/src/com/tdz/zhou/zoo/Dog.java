package com.tdz.zhou.zoo;

public class Dog extends Animal{
    private String owner;

    public Dog() {
        super(10, "none");
        this.owner = "tdz";
    }

    public Dog(String owner, int weight, String name) {
        super(weight, name);
        this.owner = owner;
    }

    public Dog(Animal origin, String owner){
        super(origin.getWeight(), origin.getName());
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

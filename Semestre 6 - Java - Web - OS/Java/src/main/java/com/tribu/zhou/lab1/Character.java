package com.tribu.zhou.lab1;

public abstract class Character {
    protected String name;
    protected String hobby;
    protected int age;

    public Character(String name, String hobby, int age) {
        this.name = name;
        this.hobby = hobby;
        this.age = age;
    }

    public boolean is_adult(int majority){
        return this.age >= majority;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getHobby() {
        return hobby;
    }

    public void setHobby(String hobby) {
        this.hobby = hobby;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public abstract boolean is_adult();
}

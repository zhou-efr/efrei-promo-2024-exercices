package com.tribu.zhou.lab1;

public class French extends Character{
    public French(String name, String hobby, int age) {
        super(name, hobby, age);
    }

    @Override
    public boolean is_adult() {
        return super.is_adult(18);
    }
}

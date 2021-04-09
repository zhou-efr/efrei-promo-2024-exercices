package com.tdz.zhou.Integers2;

public class Integers {
    public static final int five = 5;
    private int[] primitive_ints;
    private int index;

    public Integers() {
        this.primitive_ints = new int[five];
        this.index = 0;
    }

    public Integers(int[] primitive_ints, int index) {
        this.primitive_ints = primitive_ints;
        this.primitive_ints[com.tdz.zhou.Integers0.Integers.five - 1] = 666;
        this.index = index;
    }

    public void add(int added) {
        if (this.index >= 0 && this.index < 5) {
            this.primitive_ints[index] = added;
            index ++;
        }
    }

    @Override
    public String toString() {
        String returned = "[";
        for (int i :
                this.primitive_ints) {
            returned += i + " ";
        }
        returned += "]";
        return returned;
    }
}

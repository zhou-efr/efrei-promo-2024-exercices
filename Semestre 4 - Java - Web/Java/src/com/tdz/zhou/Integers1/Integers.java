package com.tdz.zhou.Integers1;

public class Integers {
    public static final int five = 5;
    private int[] primitive_ints;
    private int index;

    public Integers() {
        this.primitive_ints = new int[five];
        this.index = 0;
    }

    public Integers(int[] primitive_ints, int index) {
        this.primitive_ints = new int[Integers.five];
        System.arraycopy(primitive_ints, 0, this.primitive_ints, 0, Integers.five);
        this.primitive_ints[Integers.five - 1] = 666;
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

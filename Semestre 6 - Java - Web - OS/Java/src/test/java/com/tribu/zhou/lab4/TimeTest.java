package com.tribu.zhou.lab4;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

class TimeTest {
    @Test
    public void timeTest(){
        Time time = new Time();
        int hours = Math.round(System.currentTimeMillis()*1000*60*60);
        int min = Math.round(System.currentTimeMillis()*1000*60);
        int sec = Math.round(System.currentTimeMillis()*1000);
        assertEquals(time.getHours(), hours);
        assertEquals(time.getMin(), min);
        assertEquals(time.getSec(), sec);
    }
}
package com.tribu.zhou.lab4;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

class FanTest {
    public Fan defaultFan(){
        return new Fan(90, false, 10, "yellow");
    }

    @Test
    public void createFan(){
        Fan fan = new Fan();
    }

    @Test
    public void createFanWithParameters(){
        Fan fan = defaultFan();
        assertEquals(fan.getRadius(), 10, 0);
        assertEquals(fan.getColor(), "yellow");
        assertEquals(fan.getMaxSpeed(), 90, 0);
        assertFalse(fan.isOn());
    }

    @Test
    void testToString() {
        Fan fan = defaultFan();
        assertEquals(fan.toString(), "Fan{maxSpeed=90, on=false, radius=10, color='yellow'}");
    }

    @Test
    void setOn() {
        Fan fan = defaultFan();
        fan.setOn(true);
        assertTrue(fan.isOn());
    }

    @Test
    void setMaxSpeed() {
        Fan fan = defaultFan();
        fan.setMaxSpeed(100);
        assertEquals(fan.getMaxSpeed(), 100, 0);
    }

    @Test
    void setRadius() {
        Fan fan = defaultFan();
        fan.setRadius(100);
        assertEquals(fan.getRadius(), 100, 0);
    }

    @Test
    void setColor() {
        Fan fan = defaultFan();
        fan.setColor("red");
        assertEquals(fan.getColor(), "red");
    }
}
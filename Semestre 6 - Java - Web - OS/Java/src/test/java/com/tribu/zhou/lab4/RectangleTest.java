package com.tribu.zhou.lab4;

import org.junit.jupiter.api.Test;

import java.util.Objects;

import static org.junit.jupiter.api.Assertions.*;

class RectangleTest {
    @Test
    public void createRectangle(){
        Rectangle rectangle = new Rectangle();
    }

    @Test
    public void createRectangleWithParameters(){
        Rectangle rectangle = new Rectangle(1.1, 1.1, "Yellow");
        assert (rectangle.getWidth() == 1.1);
        assert (rectangle.getHeight() == 1.1);
        assert (Objects.equals(Rectangle.getColor(), "Yellow"));
    }

    @Test
    void getHeight() {
        Rectangle rectangle = new Rectangle(1.1, 1.1, "Yellow");
        assert (rectangle.getHeight() == 1.1);
    }

    @Test
    void setHeight() {
        Rectangle rectangle = new Rectangle(1.1, 1.1, "Yellow");
        rectangle.setHeight(1.2);
        assert (rectangle.getHeight() == 1.2);
    }

    @Test
    void getWidth() {
        Rectangle rectangle = new Rectangle(1.1, 1.1, "Yellow");
        assert (rectangle.getWidth() == 1.1);
    }

    @Test
    void setWidth() {
        Rectangle rectangle = new Rectangle(1.1, 1.1, "Yellow");
        rectangle.setWidth(1.2);
        assert (rectangle.getWidth() == 1.2);
    }

    @Test
    void getColor() {
        assert (Objects.equals(Rectangle.getColor(), "Yellow"));
    }

    @Test
    void setColor() {
        Rectangle.setColor("Red");
        assert (Objects.equals(Rectangle.getColor(), "Red"));
    }

    @Test
    void findArea(){
        Rectangle rectangle = new Rectangle(1.1, 1.1, "Yellow");
        System.out.println(rectangle.findArea());
        assertEquals(rectangle.findArea(), 1.21, 0.01);
    }

    @Test
    void findPerimeter(){
        Rectangle rectangle = new Rectangle(1.1, 1.1, "Yellow");
        assert (rectangle.findPerimeter() == 4.4);
    }
}
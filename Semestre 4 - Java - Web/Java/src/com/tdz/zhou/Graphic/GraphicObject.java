package com.tdz.zhou.Graphic;

//import Graphic.Color;

abstract public class GraphicObject {
	//abstract class (with no instantiation)

 private ZColor color;
 private int x;
 private int y;
 private int thickness;
 
 protected GraphicObject(final ZColor color, final int x, final int y, final int thickness) {
     this.color = color;
     this.x = x;
     this.y = y;
     this.thickness = thickness;
 }
 
 // CONSTRUCTOR OF COPY
 protected GraphicObject(GraphicObject obj) {
     this.color =  obj.color;
     this.x = obj.x;
     this.y = obj.y;
     this.thickness = obj.thickness;
 }
 
 //getters
 public ZColor getColor() { return color; }
 public int getX() { return x; }
 public int getY() { return y; }
 public int getThickness() { return thickness; }
 
 //setters
 public void setColor(final ZColor color) { this.color = color; }
 public void setX(final int x) { this.x = x; }
 public void setY(final int y) { this.y = y; }
 public void setThickness(final int thickness) 
 { this.thickness =  thickness; }
 
 // the displacement is a translation
 public void move(final int dx, final int dy){
     x = x + dx;
     y += dy;
 }
 
 public void display(){
     System.out.print("(" + color + " " + x  + " " + y + " " + thickness + ")");
 }
 
 public void delete(){
     System.out.println("Delete the graphic object part");
 }

 protected abstract GraphicObject copy();
}


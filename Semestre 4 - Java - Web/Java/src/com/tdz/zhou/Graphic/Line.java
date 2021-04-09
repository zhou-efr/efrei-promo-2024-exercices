package com.tdz.zhou.Graphic;

//import Graphic.Color;
//import Graphic.GraphicObject;

public class Line extends GraphicObject {
    private int length;
    private double angle;
    
   public Line(final ZColor color, final int x, final int y, final int thickness,
               final int length, final double angle){
        super(color, x, y, thickness); // 
        this.length = length; 
        this.angle = angle; 
    }
    
   // CONSTRUCTOR OF COPY
   protected Line(final Line obj) {
		super(obj.getColor(), obj.getX(), obj.getY(), obj.getThickness());
		 this.length = obj.length;
	     this.angle = obj.angle;
   }
           
    public int getLength() { return length; }
    public double getAngle() { return angle; }
    
    public void setLength(final int length) { this.length = length; }
    public void setAngle(final int angle) { this.angle = angle; }
    
    @Override
    public void display(){
        System.out.print("(");
        super.display();
        System.out.print(" " + length + " " + angle);
        System.out.println(")");
    }
    
    @Override
    public void delete(){
        System.out.println("delete the line");
        super.delete();
    }

    @Override
    public Line copy() {
        Line copy = new Line(this);
        return copy;
    }
}

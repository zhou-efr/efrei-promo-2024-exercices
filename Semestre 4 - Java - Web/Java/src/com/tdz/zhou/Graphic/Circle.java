package com.tdz.zhou.Graphic;

public class Circle extends GraphicObject{
    private int radius;

    public Circle(final ZColor color, final int x, final int y, final int thickness,
                  final int radius){
        super(color, x, y, thickness);
        this.radius = radius;
    }
    
    // CONSTRUCTOR OF COPY
    public Circle(final Circle obj) {
    	super(obj.getColor(), obj.getX(), obj.getY(), obj.getThickness());
    	this.radius = obj.radius;
    }
    	
    public int getRadius() { return radius; }
    public void setRadius(final int radius) { this.radius = radius; }
    
    // REDEFINITION of the inherited method display
    @Override
    public void display(){
        System.out.print("(");
        super.display();
        System.out.print(" " + radius);
        System.out.println(")");
    }
    
    @Override
    public void delete(){
        super.delete();
        System.out.println("delete the part circle");
    }

    @Override
    public Circle copy() {
        Circle copy = new Circle(this);
        return copy;
    }
}
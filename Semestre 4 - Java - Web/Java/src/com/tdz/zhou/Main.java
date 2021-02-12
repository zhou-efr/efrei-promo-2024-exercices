package com.tdz.zhou;

public class Main {

    public static void test_point() {
        /*
            qus 1. no since the parameter is private
            qus 2.
            qus 3. to manage the user access to attributes
            qus 4. done
            qus 5. done
            qus 6. done
            qus 7. done
            qus 8. done
         */
        Point p = new Point(2, 3);
        p.display();
        System.out.println("absicia = " + p.getX() + " ; ordinate = " + p.getY());
        p.setX(5);
        p.setY(6);
        System.out.println(p.toStr());
    }

    public static void test_Segment(){
        Segment s = new Segment(new Point(1, 2), new Point(2, 2));
        s.display();
        System.out.println("A = " + s.getA().toStr() + " ; b = " + s.getB().toStr());
        s.setA(new Point(5, 5));
        s.setB(new Point(6, 6));
        System.out.println(s.toStr());
    }

    public static void main(String[] args) {
        test_point();
        System.out.println("--------------");
        test_Segment();
    }
}

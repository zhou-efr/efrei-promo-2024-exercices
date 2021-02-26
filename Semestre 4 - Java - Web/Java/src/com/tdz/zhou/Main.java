package com.tdz.zhou;

import com.tdz.zhou.animals.Animal;
import com.tdz.zhou.animals.Cat;
import com.tdz.zhou.animals.Dog;
import com.tdz.zhou.geometry.Point;
import com.tdz.zhou.geometry.Segment;
import com.tdz.zhou.others.Vehicle;

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
        System.out.println(p.toString());
    }

    public static void test_Segment(){
        Segment s = new Segment(new Point(1, 2), new Point(2, 2));
        s.display();
        System.out.println("A = " + s.getA().toString() + " ; b = " + s.getB().toString());
        s.setA(new Point(5, 5));
        s.setB(new Point(6, 6));
        System.out.println(s.toString());
        System.out.println("length = " + s.getLength());
    }

    public static void test_Vehicle() {
        Vehicle a = new Vehicle("Panda", 200, 5);
        Vehicle b = new Vehicle("Panda", 100, 2.5);

        System.out.println("step 1 : " + a + "\n" + b);
        a.start(80);
        b.start(50);
        System.out.println("step 2 : " + a + "\n" + b);
        a.accelerate(80);
        b.accelerate(90);
        System.out.println("step 3 : " + a + "\n" + b);
        a.forward(100);
        b.backward(300);
        System.out.println("step 4 : " + a + "\n" + b);
        System.out.println(Vehicle.getNumber());
    }

    public static void test_Animal() {
        Animal panda = new Animal(75, "panda");
        Dog un = new Dog("a", 10, "un");
        System.out.println(un.toString());
        Dog[] dogs = {
                un,
                new Dog("b", 10, "deux"),
                new Dog("c", 10, "trois"),
                new Dog("d", 10, "quatre") };
        for (Dog dog : dogs) {
            System.out.println(dog.toString());
        }
        Cat cinq = new Cat("red", 7, "mirou");
        System.out.println(cinq.toString());
    }

    public static void main(String[] args) {
//        test_point();
//        System.out.println("--------------");
//        test_Segment();
//        System.out.println("--------------");
//        test_Vehicle();
        test_Animal();
    }
}

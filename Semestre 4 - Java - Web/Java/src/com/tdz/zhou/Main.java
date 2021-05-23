package com.tdz.zhou;

//import com.tdz.zhou.Integers0.Integers;
//import com.tdz.zhou.Integers1.Integers;
import com.tdz.zhou.Graphic.*;
import com.tdz.zhou.Graphic2.Ellipse;
import com.tdz.zhou.Graphic2.Rectangle;
import com.tdz.zhou.Integers2.Integers;
import com.tdz.zhou.geometry.Circle;
import com.tdz.zhou.geometry.CircleBold;
import com.tdz.zhou.zoo.Animal;
import com.tdz.zhou.zoo.Cat;
import com.tdz.zhou.zoo.Dog;
import com.tdz.zhou.geometry.Point;
import com.tdz.zhou.geometry.Segment;
import com.tdz.zhou.others.Vehicle;

import java.awt.*;
import java.util.Scanner;

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
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        sc.nextLine();
        String b = sc.nextLine();

        Animal panda = new Animal(a, b);

        System.out.println(panda.toString());
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
        Animal qw = new Dog();

    }

    public static void test_Circle() {
        Circle c = new Circle(1, 2, 3);
        System.out.println(c.toString());
    }

    public static void test_Circle_Bold() {
        CircleBold c = new CircleBold(1, 2, 3, Color.RED);
        System.out.println(c.toString());
    }

    public static void display(int[] a) {
        for (int i :
                a) {
            System.out.print(i + " ");
        }
        System.out.println("");
    }

    public static void test_integers0() {
        Integers int1 = new Integers();

        int1.add(1);
        int1.add(2);
        int1.add(3);
        System.out.println("integer 1 = " + int1);

        int[] tab = new int[Integers.five];
        tab[0] = 20;
        tab[1] = 30;
        tab[2] = 40;
        System.out.print("table : ");display(tab);

        Integers int2 = new Integers(tab, 3);
        System.out.println("integer 2 = " + int2);

        tab[1] = -1;
        System.out.print("table = ");display(tab);
        System.out.println("integer 2 = " + int2);
    }

    public static void test_integers1() {
        Integers int1 = new Integers();

        int1.add(1);
        int1.add(2);
        int1.add(3);
        System.out.println("integer 1 = " + int1);

        int[] tab = new int[Integers.five];
        tab[0] = 20;
        tab[1] = 30;
        tab[2] = 40;
        System.out.print("table : ");display(tab);

        Integers int2 = new Integers(tab, 3);
        System.out.println("integer 2 = " + int2);

        tab[1] = -1;
        System.out.print("table = ");display(tab);
        System.out.println("integer 2 = " + int2);
    }

    public static void test_integers2() {
        Integers int1 = new Integers();

        int1.add(1);
        int1.add(2);
        int1.add(3);
        System.out.println("integer 1 = " + int1);

        int[] tab = new int[Integers.five];
        tab[0] = 20;
        tab[1] = 30;
        tab[2] = 40;
        System.out.print("table : ");display(tab);

        Integers int2 = new Integers(tab, 3);
        System.out.println("integer 2 = " + int2);

        tab[1] = -1;
        System.out.print("table = ");display(tab);
        System.out.println("integer 2 = " + int2);
    }

    public static void use(){

    }

    public static void TestShapes(){
        Ellipse e1 = new Ellipse(2, 1);
        e1.description();

        Ellipse e2 = new Ellipse(4, 1);
        e2.description();

        Rectangle r1 = new Rectangle(2, 1);
        r1.description();
    }
    private static int nomre = 0;
    public static void main(String[] args) {
//        test_point();
//        System.out.println("--------------");
//        test_Segment();
//        System.out.println("--------------");
//        test_Vehicle();
//        test_Animal();
//        test_Circle();
//        test_Circle_Bold();
//        test_integers0();
//        use();
        TestShapes();
    }
}

package com.tribu.zhou.lab8;

import javax.imageio.ImageIO;
import javax.swing.*;
import java.awt.*;
import static java.lang.Double.parseDouble;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;

public class Lab8Ex3 extends JFrame {

    JTextArea miles;
    JTextArea kilometers;

    public Lab8Ex3() {
        miles = new JTextArea();
        kilometers = new JTextArea();

        miles.addKeyListener(new KeyAdapter() {
            public void keyPressed(KeyEvent e) {
                if (e.getKeyCode() == 10) {
                    kilometers.setText(String.valueOf(parseDouble(miles.getText())*1.609344));
                }
            }
        });

        kilometers.addKeyListener(new KeyAdapter() {
            public void keyPressed(KeyEvent e) {
                if (e.getKeyCode() == 10) {
                    miles.setText(String.valueOf(parseDouble(kilometers.getText())*0.6214));
                }
            }
        });

        setLayout(new FlowLayout());
        add(miles);
        add(kilometers);

        setSize(300, 300);
        setVisible(true);
    }
}

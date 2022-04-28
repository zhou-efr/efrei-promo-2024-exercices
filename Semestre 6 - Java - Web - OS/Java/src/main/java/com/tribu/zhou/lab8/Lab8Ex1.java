package com.tribu.zhou.lab8;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Lab8Ex1 extends JFrame implements ActionListener {

    private final JRadioButton yellowBtn;
    private final JRadioButton whiteBtn;
    private final JRadioButton grayBtn;
    private final JRadioButton greenBtn;

    public Lab8Ex1(){
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(500, 500);
        this.getContentPane().setBackground(Color.YELLOW);

        this.setLayout(new BoxLayout(this.getContentPane(), BoxLayout.PAGE_AXIS));

        ButtonGroup colorPicker = new ButtonGroup();

        yellowBtn = new JRadioButton("Yellow");
        yellowBtn.addActionListener(this);
        yellowBtn.setSelected(true);
        colorPicker.add(yellowBtn);
        this.add(yellowBtn);

        whiteBtn = new JRadioButton("White");
        whiteBtn.addActionListener(this);
        colorPicker.add(whiteBtn);
        this.add(whiteBtn);

        grayBtn = new JRadioButton("Gray");
        grayBtn.addActionListener(this);
        colorPicker.add(grayBtn);
        this.add(grayBtn);

        greenBtn = new JRadioButton("Green");
        greenBtn.addActionListener(this);
        colorPicker.add(greenBtn);
        this.add(greenBtn);

        this.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (yellowBtn.isSelected()) {
            this.getContentPane().setBackground(Color.YELLOW);
        }else if (whiteBtn.isSelected()) {
            this.getContentPane().setBackground(Color.WHITE);
        }else if (grayBtn.isSelected()) {
            this.getContentPane().setBackground(Color.GRAY);
        }else if (greenBtn.isSelected()) {
            this.getContentPane().setBackground(Color.GREEN);
        }
    }

    public static void main(String[] args) {
        new Lab8Ex1();
    }
}

package com.tribu.zhou.lab8;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Objects;

import static java.lang.Double.parseDouble;
import static java.lang.Integer.parseInt;

public class Lab8Ex2 extends JFrame implements ActionListener {

    private String current;
    private String previous;
    private boolean decimal;
    private double memory;
    private boolean saved;

    private char operation;

    private JButton[] buttons;

    private JTextField output;
    private JTextField prev;

    public Lab8Ex2(){
        JPanel calculator = new JPanel(new GridLayout(0, 4));
        calculator.setSize(300, 400);

        buttons = new JButton[16];
        output = new JTextField();
        prev = new JTextField();
        current = "0";
        previous = "";
        operation = ' ';
        memory = 0.0;
        saved = false;


        String[] buttonsNames = {
                "7", "8", "9", "+",
                "4", "5", "6", "-",
                "1", "2", "3", "*",
                ",", "0", "=", "/",
        };

        for (int i = 0; i < 16; i++) {
            buttons[i] = new JButton(buttonsNames[i]);
            buttons[i].setName(buttonsNames[i]);
            buttons[i].addActionListener(this);
            buttons[i].setSize(75, 100);
            calculator.add(buttons[i]);
        }

        output.setEditable(false);
        output.setSize(300, 100);
        output.setText(current);

        prev.setEditable(false);
        prev.setSize(300, 100);
        prev.setText(previous);

        setLayout(new BoxLayout(getContentPane(), BoxLayout.PAGE_AXIS));
        add(prev);
        add(output);
        add(calculator);

        setSize(300, 500);
        setVisible(true);
    }

    private void enterNumber(String i){
        if (Objects.equals(current, "0")){
            if (Objects.equals(i, "0")){
                return;
            }else {
                current = i;
            }
        }else {
            current += i;
        }

        output.setText(current);
    }

    public void compute(){
        switch (operation){
            case '+':
                memory += parseDouble(current);
                break;
            case '-':
                memory -= parseDouble(current);
                break;
            case '/':
                if (parseDouble(current) == 0)
                    return;
                memory /= parseDouble(current);
                break;
            case '*':
                memory *= parseDouble(current);
                break;
        }
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        switch (((JButton)e.getSource()).getName()){
            case "7":
            case "8":
            case "9":
            case "4":
            case "0":
            case "5":
            case "6":
            case "1":
            case "2":
            case "3":
                enterNumber(((JButton)e.getSource()).getName());
                break;
            case ",":
                break;
            case "-":
                if (saved){
                    compute();
                }else {
                    memory = parseDouble(current);
                    saved = true;
                }
                operation = '-';
                current = "0";
                output.setText(current);
                prev.setText(String.valueOf(memory));
                break;
            case "*":
                if (saved){
                    compute();
                }else {
                    memory = parseDouble(current);
                    saved = true;
                }
                operation = '*';
                current = "0";
                output.setText(current);
                prev.setText(String.valueOf(memory));
                break;
            case "/":
                if (saved){
                    if (parseDouble(current) == 0)
                        return;

                    compute();
                }else {
                    memory = parseDouble(current);
                    saved = true;
                }
                operation = '/';
                current = "0";
                output.setText(current);
                prev.setText(String.valueOf(memory));
                break;
            case "+":
                if (saved){
                    compute();
                }else {
                    memory = parseDouble(current);
                    saved = true;
                }
                operation = '+';
                current = "0";
                output.setText(current);
                prev.setText(String.valueOf(memory));
                break;
            case "=":
                if (saved){
                    compute();
                    current = "0";
                    output.setText(String.valueOf(memory));
                    prev.setText("");
                    operation = ' ';
                    memory = 0;
                    saved = false;
                }
                break;
        }
    }

    public static void main(String[] args) {
        new Lab8Ex2();
    }
}

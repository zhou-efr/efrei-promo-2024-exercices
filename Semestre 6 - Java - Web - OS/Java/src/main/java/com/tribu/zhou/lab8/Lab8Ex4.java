package com.tribu.zhou.lab8;

import javax.swing.*;

//GUI class to compute future  value  of  an  investment  at  a  given  interest rate for a specified number of years
//Use  text  fields  for  interest  rate,  investment  amount,  and  years.  Display  the  future amount in a text field when the user clicks the Calculator button.
public class Lab8Ex4 extends JFrame {
    double futureValue;
    double interestRate;
    double principal;
    int years;

    public Lab8Ex4() {
        super("Future Value Calculator");
        JPanel panel = new JPanel();
        JLabel label1 = new JLabel("Principal");
        JLabel label2 = new JLabel("Interest Rate");
        JLabel label3 = new JLabel("Years");
        JTextField textField1 = new JTextField(10);
        JTextField textField2 = new JTextField(10);
        JTextField textField3 = new JTextField(10);
        JButton button = new JButton("Calculate");
        panel.add(label1);
        panel.add(textField1);
        panel.add(label2);
        panel.add(textField2);
        panel.add(label3);
        panel.add(textField3);
        panel.add(button);
        add(panel);
        button.addActionListener(e -> {
            principal = Double.parseDouble(textField1.getText());
            interestRate = Double.parseDouble(textField2.getText());
            years = Integer.parseInt(textField3.getText());
            futureValue = calculateFutureValue();
            displayFutureValue();
        });
        setSize(400, 200);
        setVisible(true);
    }

    private void displayFutureValue() {
        JOptionPane.showMessageDialog(null, "The future value is $" + futureValue);
    }

    private double calculateFutureValue() {
        return principal * Math.pow(1 + interestRate, years);
    }

    public static void main(String[] args) {
        new Lab8Ex4();
    }
}

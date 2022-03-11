package com.tribu.zhou.lab4;

public class Account {
    private int id;
    private double balance;
    private double annualInterestRate;

    public Account(int id, double balance, double annualInterestRate) {
        this.id = id;
        this.balance = balance;
        this.annualInterestRate = annualInterestRate;
    }

    public double getAnnualInterestRate() {
        return annualInterestRate;
    }

    public void setAnnualInterestRate(double annualInterestRate) {
        this.annualInterestRate = annualInterestRate;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public void withdraw(double withdrew) {
        if(withdrew > 0){
            balance -= withdrew;
        }
    }

    public void deposit(double deposited) {
        if(deposited > 0){
            balance += deposited;
        }
    }

    public double getMonthlyInterest() {
        return (annualInterestRate*balance)/12;
    }
}

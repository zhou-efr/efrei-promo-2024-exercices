package com.tribu.zhou.lab4;

import org.junit.jupiter.api.Test;

public class AccountTest {
    @Test
    public void createAccount(){
        Account account = new Account(1222, 20000.0, 4.5);
        assert(account.getId() == 1222);
        assert(account.getBalance() == 20000.0);
        assert(account.getAnnualInterestRate() == 4.5);
    }

    @Test
    public void withdraw(){
        Account account = new Account(1222, 20000.0, 4.5);
        double withdrew = 2500.0;
        account.withdraw(withdrew);
        assert (account.getBalance() == 20000.0-withdrew);
    }

    @Test
    public void deposit(){
        Account account = new Account(1222, 20000.0, 4.5);
        double deposited = 2500.0;
        account.deposit(deposited);
        assert (account.getBalance() == 20000.0+deposited);
    }

    @Test
    public void monthlyInterests(){
        Account account = new Account(1222, 20000.0, 4.5);
        assert (account.getMonthlyInterest() == 7500.0);
    }

    @Test
    void setAnnualInterestRate() {
        Account account = new Account(1222, 20000.0, 4.5);
        account.setAnnualInterestRate(5.0);
        assert (account.getAnnualInterestRate() == 5.0);
    }

    @Test
    void setId() {
        Account account = new Account(1222, 20000.0, 4.5);
        account.setId(1223);
        assert (account.getId() == 1223);
    }

    @Test
    void setBalance() {
        Account account = new Account(1222, 20000.0, 4.5);
        account.setBalance(0);
        assert (account.getBalance() == 0);
    }
}

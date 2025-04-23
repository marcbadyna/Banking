//
//  banking.cpp
//  Banking
//
//  Created by Marc Badyna on 4/23/25.
//
#include "banking.h"
#include <iostream>

Account::Account(int accountNumber, std::string name, double balance) : accountNumber(accountNumber), name(name), balance(balance) {}

Bank::Bank() : nextAccountNumber(1) {}

int Account::getAccountNumber() const {
    return accountNumber;
}


void Account::displayAccount() const {
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Balance: " << balance << std::endl;
}

void Bank::createAccount() {
    std::string name;
    double balance;
    
    std::cin.ignore();
    
    std:: cout << "Name: ";
    std::getline(std::cin, name);
    std::cout << "Balance: ";
    std::cin >> balance;
    std::cin.ignore();
    
    Account newAccount(nextAccountNumber, name, balance);
    accounts.push_back(newAccount);
    ++nextAccountNumber;
    
    std::cout << "Account added!\n";
}

void Bank::displayAllAccounts() {
    if (accounts.empty()) {
        std::cout << "No accounts to display..\n";
    } else {
        for (const Account& account : accounts) {
            account.displayAccount();
        }
    }
}

double Account::getBalance() {
    return balance;
}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdrawal(double amount) {
    if (amount <= balance) {
        balance -= amount;
    } else {
        std::cout << "Insufficient Funds!\n";
    }
}

void Bank::deposit() {
    int accNum;
    double amount;
    
    std::cout << "Enter account number: ";
    std::cin>> accNum;
    
    std::cout << "Enter amount to deposit: ";
    std::cin>> amount;
    
    for (auto& account : accounts) {
        if (account.getAccountNumber() == accNum) {
            account.deposit(amount);
            std::cout << "Deposit Successful!\n";
            return;
        }
    }
    std::cout << "Account not found.\n";
}

void Bank::withdrawal() {
    int accNum;
    double amount;
    
    std::cout << "Enter account number: ";
    std::cin>> accNum;
    
    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;
    
    for (auto& account : accounts) {
        if (account.getAccountNumber() == accNum) {
            account.withdrawal(amount);
            std::cout << "Withdrawing $" << amount << std::endl;
            return;
        }
    }
    std::cout << "Account not found.\n";
}

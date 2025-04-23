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

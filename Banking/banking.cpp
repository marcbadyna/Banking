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

void Account::displayAccount() {
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Balance: " << balance << std::endl;
}

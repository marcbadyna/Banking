//
//  banking.h
//  Banking
//
//  Created by Marc Badyna on 4/23/25.
//

#ifndef banking_h
#define banking_h
#include <string>
#include <vector>

class Account {
private:
    int accountNumber;
    std::string name;
    double balance;
public:
    Account(int accountNumber, std::string name, double balance);
    void displayAccount() const;
    double getBalance();
    int getAccountNumber() const;
    void deposit(double amount);
    void withdrawal(double amount);
};

class Bank {
private:
    std::vector<Account> accounts;
    int nextAccountNumber;
public:
    Bank();
    void createAccount();
    void displayAllAccounts();
    void deposit();
    void withdrawal();
};

#endif

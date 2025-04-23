//
//  main.cpp
//  Banking
//
//  Created by Marc Badyna on 4/23/25.
//

#include <iostream>
#include "banking.h"

int main() {
    Bank bank;
    int choice;
    
    do {
        std::cout << "1. Create Account\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdrawal\n";
        std::cout << "4. Display All Accounts\n";
        std::cout << "5. exit\n";
        std::cout << "Enter your choice: ";
        
        std::cin >> choice;
        
        switch (choice) {
            case 1:
                bank.createAccount();
                break;
            case 2:
                bank.deposit();
                break;
            case 3:
                bank.withdrawal();
                break;
            case 4:
                bank.displayAllAccounts();
                break;
            case 5:
                break;
            default:
                std::cout << "Invalid Choice!";
                break;
        }
    } while (choice != 5);
    
    return 0;
}

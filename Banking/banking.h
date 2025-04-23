//
//  banking.h
//  Banking
//
//  Created by Marc Badyna on 4/23/25.
//

#ifndef banking_h
#define banking_h
#include <string>

class Account {
private:
    int accountNumber;
    std::string name;
    double balance;
public:
    Account(int accountNumber, std::string name, double balance);
};

#endif

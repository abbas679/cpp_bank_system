#ifndef BANK_H
#define BANK_H

#include <string>
#include <vector>

struct Account {
    int id;
    std::string name;
    double balance;
};

class Bank {
private:
    std::vector<Account> accounts;
    int nextId;

public:
    Bank();
    void createAccount(const std::string& name, double initialDeposit);
    void deposit(int accountId, double amount);
    void withdraw(int accountId, double amount);
    void displayAccount(int accountId);
    void displayAllAccounts();
};

#endif

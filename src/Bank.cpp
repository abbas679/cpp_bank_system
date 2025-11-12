#include "Bank.h"
#include <iostream>
#include <iomanip>

Bank::Bank() : nextId(1) {}

void Bank::createAccount(const std::string& name, double initialDeposit) {
    Account acc{nextId++, name, initialDeposit};
    accounts.push_back(acc);
    std::cout << "Account created successfully! ID: " << acc.id << "\n";
}

void Bank::deposit(int accountId, double amount) {
    for (auto &acc : accounts) {
        if (acc.id == accountId) {
            acc.balance += amount;
            std::cout << "Deposited $" << amount << " to account ID " << accountId << "\n";
            return;
        }
    }
    std::cout << "Account not found!\n";
}

void Bank::withdraw(int accountId, double amount) {
    for (auto &acc : accounts) {
        if (acc.id == accountId) {
            if (acc.balance >= amount) {
                acc.balance -= amount;
                std::cout << "Withdrew $" << amount << " from account ID " << accountId << "\n";
            } else {
                std::cout << "Insufficient balance!\n";
            }
            return;
        }
    }
    std::cout << "Account not found!\n";
}

void Bank::displayAccount(int accountId) {
    for (auto &acc : accounts) {
        if (acc.id == accountId) {
            std::cout << "Account ID: " << acc.id << "\n";
            std::cout << "Name: " << acc.name << "\n";
            std::cout << "Balance: $" << std::fixed << std::setprecision(2) << acc.balance << "\n";
            return;
        }
    }
    std::cout << "Account not found!\n";
}

void Bank::displayAllAccounts() {
    if (accounts.empty()) {
        std::cout << "No accounts found.\n";
        return;
    }
    std::cout << "All Accounts:\n";
    for (auto &acc : accounts) {
        std::cout << "ID: " << acc.id
                  << " | Name: " << acc.name
                  << " | Balance: $" << std::fixed << std::setprecision(2) << acc.balance << "\n";
    }
}

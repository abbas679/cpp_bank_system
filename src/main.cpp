#include "Bank.h"
#include <iostream>

int main() {
    Bank bank;
    int choice;

    do {
        std::cout << "\n=== Bank Management System ===\n";
        std::cout << "1. Create Account\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Display Account\n";
        std::cout << "5. Display All Accounts\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        int id;
        double amount;
        std::string name;

        switch (choice) {
            case 1:
                std::cout << "Enter your name: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                std::cout << "Enter initial deposit: ";
                std::cin >> amount;
                bank.createAccount(name, amount);
                break;
            case 2:
                std::cout << "Enter account ID: ";
                std::cin >> id;
                std::cout << "Enter deposit amount: ";
                std::cin >> amount;
                bank.deposit(id, amount);
                break;
            case 3:
                std::cout << "Enter account ID: ";
                std::cin >> id;
                std::cout << "Enter withdrawal amount: ";
                std::cin >> amount;
                bank.withdraw(id, amount);
                break;
            case 4:
                std::cout << "Enter account ID: ";
                std::cin >> id;
                bank.displayAccount(id);
                break;
            case 5:
                bank.displayAllAccounts();
                break;
            case 0:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}

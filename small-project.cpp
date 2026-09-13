#include <iostream>
#include <string>

class BankAccount {

private:
    std::string owner;
    double balance;

public:

    BankAccount(std::string name, double initialBalance) {
        owner = name;
        balance = initialBalance;
    }

    void deposit(double amount) {

        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit successful\n";
        }
    }

    void withdraw(double amount) {

        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful\n";
        }
        else {
            std::cout << "Insufficient balance\n";
        }
    }

    void showBalance() {
        std::cout << owner
                  << "'s balance: "
                  << balance
                  << "\n";
    }
};
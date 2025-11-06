/*Write a C++ program to manage a simple Bank Account with:
Account holder name, account number, balance.
Functions to deposit, withdraw, and display balance.*/

#include <iostream>
using namespace std;

class BankAccount {
    string accountHolderName;
    int accountNumber;
    float balance;
public:
    BankAccount(string name, int number) {
        accountHolderName = name;
        accountNumber = number;
        balance = 0;
    }

    void deposit() {
        float amount;
        cout << "Enter the amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }

    void withdraw() {
        float amount;
        cout << "Enter the amount to withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void displayBalance() {
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    string name;
    int number;
    cout << "Enter account holder name: ";
    cin >> name;
    cout << "Enter account number: ";
    cin >> number;

    BankAccount account(name, number);
    int choice;
    do {
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.deposit();
                break;
            case 2:
                account.withdraw();
                break;
            case 3:
                account.displayBalance();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}

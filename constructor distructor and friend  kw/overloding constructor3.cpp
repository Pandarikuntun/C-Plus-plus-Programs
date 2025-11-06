#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    float balance;

public:
    // Default constructor
    BankAccount() {
        accountNumber = 1001;
        balance = 0.0;
    }

    // Constructor with account number only
    BankAccount(int accNo) {
        accountNumber = accNo;
        balance = 0.0;
    }

    // Constructor with account number and initial balance
    BankAccount(int accNo, float bal) {
        accountNumber = accNo;
        balance = bal;
    }

	display();
   
};
BankAccount :: display() {
        cout << "Account Number: " << accountNumber
             << ", Balance: ?" << balance << endl;
    }

int main() {
    BankAccount acc1;                      // Default account
    BankAccount acc2(2002);                // Account with number only
    BankAccount acc3(3003, 15000.75);      // Account with full details


    acc1.display();
    acc2.display();
    acc3.display();


    return 0;
}

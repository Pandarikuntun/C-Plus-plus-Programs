#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountHolder;
    double balance;
public:
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }
    // Declare friend function
    friend void showBalance(const BankAccount&);
};
// Friend function definition
void showBalance(const BankAccount& acc) {
    cout << "Account Holder: " << acc.accountHolder << endl;
    cout << "Current Balance: " << acc.balance << endl;
}
int main() {
    BankAccount acc1("Sri", 15000.75);
    showBalance(acc1);  // Friend function accessing private members 501.0
    return 0;
}

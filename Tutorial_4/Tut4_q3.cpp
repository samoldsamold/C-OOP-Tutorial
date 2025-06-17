/*
    Student ID: CST2309191
    Tutorial 4
    Question 3
*/
#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    int balance;
public:
    Account(int initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Initial balance was invalid. Balance set to 0." << endl;
        }
    }
    // Function to deposit money
    int getBalance() const {
        return balance;
    }
};

int main() {
    int initialBalance;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    Account myAccount(initialBalance);

    cout << "The balance is: " << myAccount.getBalance() << endl;

    return 0;
}
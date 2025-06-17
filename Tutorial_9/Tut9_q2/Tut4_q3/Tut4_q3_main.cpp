/*
    Student ID: CST2309191
    Tutorial 4
    Question 3
*/
#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    int initialBalance;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    Account myAccount(initialBalance);

    cout << "The balance is: " << myAccount.getBalance() << endl;

    return 0;
}
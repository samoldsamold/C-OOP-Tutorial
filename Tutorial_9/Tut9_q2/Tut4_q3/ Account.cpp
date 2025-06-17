#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(int initialBalance) {
    if (initialBalance >= 0) {
        balance = initialBalance;
    } else {
        balance = 0;
        cout << "Initial balance was invalid. Balance set to 0." << endl;
    }
}

int Account::getBalance() const {
    return balance;
}

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    int balance;

public:
    Account(int initialBalance);
    int getBalance() const;
};

#endif
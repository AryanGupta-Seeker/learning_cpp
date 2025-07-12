// Friend Function Modifying Private Members
#include<iostream>
using namespace std;

class Account {
private:
    int balance;
public:
    Account() : balance(1000) {}
    friend void deposit(Account&, int);
};

void deposit(Account& acc, int amount) {
    acc.balance += amount;
    cout << "New Balance: " << acc.balance << endl;
}

int main() {
    Account a;
    deposit(a, 500);
}

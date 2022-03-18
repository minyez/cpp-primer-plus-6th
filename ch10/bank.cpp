/*
 * Date  : 2022-03-18 18:35:13
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <string>
#include "bank.h"

BankAccount::BankAccount(std::string fn, std::string acc, double b)
{
    fullname = fn;
    account = acc;
    balance = b;
}

void BankAccount::show(void) const
{
    using std::cout, std::endl;
    cout << "Balance of account \"" << account << "\" of "
         << fullname << ": " << balance << endl;
}

void BankAccount::deposit(double amount)
{
    balance += amount;
}

void BankAccount::withdraw(double amount)
{
    using std::cout, std::endl;
    if (balance < amount)
    {
        cout << "Current balance (" << balance << ") < " << amount
             << ", cannot withdraw." << endl;
        return;
    }
    balance -= amount;
}

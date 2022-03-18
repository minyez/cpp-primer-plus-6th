#pragma once
#include <string>
class BankAccount
{
    private:
        std::string fullname;
        std::string account;
        double balance;
    public:
        BankAccount(std::string="null", std::string="null", double=0.0);
        void show(void) const;
        void deposit(double);
        void withdraw(double);
};

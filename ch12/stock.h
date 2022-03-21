#pragma once
#include <iostream>
using std::ostream;

class Stock
{
    private:
        char *company;
        int shares;
        double share_val;
        double total_val;
        void set_tot() { total_val = shares * share_val; }
    public:
        Stock(const char *cname = "", long ns = 0, double price = 0.0);
        ~Stock();
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double);
        const Stock & topval(const Stock &) const;
        // overload operator friend
        friend ostream & operator<<(ostream &, const Stock &);
};


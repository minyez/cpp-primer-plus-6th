/*
 * Date  : 2022-03-18 17:10:25
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <cstring>
#include "stock.h"
using std::strlen;
using std::strcpy;
using std::endl;
using std::ostream;

Stock::Stock(const char *cname, long ns, double price)
{
    company = new char [strlen(cname)+1];
    strcpy(company, cname);
    shares = ns;
    share_val = price;
    set_tot();
}

Stock::~Stock()
{
    delete [] company;
}

void Stock::buy(long num, double price)
{
    if(num<0) return;
    shares += num;
    share_val = price;
    set_tot();
}

void Stock::sell(long num, double price)
{
    if(num<0) return;
    if(num>shares) return;
    shares -= num;
    share_val = price;
    set_tot();
}

ostream & operator<<(ostream &os, const Stock &st)
{
    os << "Company: " << st.company << "  Shares: " << st.shares << endl
       << "  Share price: $" << st.share_val << "  Total Worth: $" << st.total_val;
    return os;
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

// 返回 const 引用避免左值修改
const Stock & Stock::topval(const Stock & s2) const
{
    if (s2.total_val > total_val)
        return s2;
    return *this;
}


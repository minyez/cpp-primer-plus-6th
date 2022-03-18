/*
 * Date  : 2022-03-18 17:10:25
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <string>

class Stock
{
    private:
        std::string m_name;
        double m_value;
    public:
        Stock(std::string = "", double value = 0.0);
        ~Stock(void);
        void show(void) const;
        void update(double);
        const Stock & topval(const Stock &) const;
};

Stock::Stock(std::string s, double value)
{
    m_name = s;
    m_value = value;
}

Stock::~Stock()
{
    using std::cout;
    cout << "Deleting: ";
    show();
}

void Stock::show(void) const
{
    using std::cout, std::endl;
    cout << "stock \"" << m_name << "\" at value = " << m_value << endl;
}

void Stock::update(double v)
{
    m_value = v;
}

// 返回 const 引用避免左值修改
const Stock & Stock::topval(const Stock & s2) const
{
    if (s2.m_value > m_value)
        return s2;
    return *this;
}

int main(int argc, char** argv)
{
    Stock s1("BB", 10.0);
    const Stock s2("DD", 20.0);
    s1.topval(s2).show(); // s2 is larger
    s1.update(30.0);
    s1.topval(s2).show(); // now s1 is larger
    return 0;
}

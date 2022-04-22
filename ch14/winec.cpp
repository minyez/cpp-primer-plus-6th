#include <iostream>
#include "winec.h"
#include <valarray>
using std::valarray;
using std::cout;
using std::cin;
using std::endl;

Wine::Wine(const char *l, int y, const int yr[], const int bot [])
{
    name = l;
    nyears = y;
    valarray<int> ay(yr, y);
    valarray<int> ab(bot, y);
    
    year_num.first() = ay;
    year_num.second() = ab;
}

Wine::Wine(const char *l, int y)
{
    name = l;
    nyears = y;
    valarray<int> ay(y);
    valarray<int> ab(y);

    year_num.first() = ay;
    year_num.second() = ab;
}

void Wine::GetBottles()
{
    cout << "Enter " << name << " data for " << nyears << " year(s):" << endl;
    for (int i = 0; i < nyears; i++)
    {
        cout << "Enter year: ";
        cin >> year_num.first()[i];
        while (cin.get() != '\n') continue;
        cout << "Enter bottles for that year: ";
        cin >> year_num.second()[i];
        while (cin.get() != '\n') continue;
    } /* end for (int i = 0; i < nyears; i++) */
}

void Wine::Show()
{
    cout << "Wine: " << name << endl
         << "        Year    Bottles" << endl;
    for (int i = 0; i < nyears; i++)
    {
         cout << "        " << year_num.first()[i] << "    " << year_num.second()[i] <<  endl;
    } /* end for (int i = 0; i < nyears; i++) */
}

int Wine::sum() const
{
    int sum = 0;
    for (int i = 0; i < nyears; i++)
    {
        sum += year_num.second()[i];
    } /* end for (int i = 0; i < nyears; i++) */
    return sum;
}

#include <iostream>
#include "winep.h"
#include <valarray>
using std::cout;
using std::cin;
using std::endl;


void Wine::GetBottles()
{
    cout << "Enter " << Label() << " data for " << nyears << " year(s):" << endl;
    for (int i = 0; i < nyears; i++)
    {
        cout << "Enter year: ";
        cin >> ((PairArray)*this).first()[i];
        while (cin.get() != '\n') continue;
        cout << "Enter bottles for that year: ";
        cin >> ((PairArray)*this).second()[i];
        while (cin.get() != '\n') continue;
    } /* end for (int i = 0; i < nyears; i++) */
}

void Wine::Show()
{
    cout << "Wine: " << Label() << endl
         << "        Year    Bottles" << endl;
    for (int i = 0; i < nyears; i++)
    {
         cout << "        " << ((PairArray)*this).first()[i] << "    " << ((PairArray)*this).second()[i] <<  endl;
    } /* end for (int i = 0; i < nyears; i++) */
}

int Wine::sum() const
{
    int sum = 0;
    for (int i = 0; i < nyears; i++)
    {
        sum += ((PairArray)*this).second()[i];
    } /* end for (int i = 0; i < nyears; i++) */
    return sum;
}

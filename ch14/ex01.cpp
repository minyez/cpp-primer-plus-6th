#include <iostream>
#include "winec.h"

int main(int argc, char** argv)
{
    using namespace std;
    cout << "Enter name of wine: ";
    char name[50];
    int yrs;
    cin.getline(name, 50);
    cout << "Enter number of years: ";
    cin >> yrs;
    while (cin.get() != '\n') continue;
    Wine holding(name, yrs);
    holding.GetBottles();
    holding.Show();

    const int YRS = 3;
    int y[YRS] = {1993, 1995, 1998};
    int b[YRS] = {48, 60, 72};
    Wine more("Gushing Grape Red", YRS, y, b);
    more.Show();
    cout << "Total bottles for " << more.Label()
         << ": " << more.sum() << endl;
    cout << "Bye\n";

    
    return 0;
}

/*
 * Date  : 2022-03-17 20:50:31
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include "sales.h"
namespace SALES
{
    void setSales(Sales & s, const double ar[], int n)
    {
        int count;
        for (count = 0; count < QUARTERS && count < n; count++)
            s.sales[count] = ar[count];
        for (int i = count; i < QUARTERS; i++)
            s.sales[i] = 0;
        double total, max, min;
        total = s.max = s.min = s.sales[0];
        for (int i = 0; i < count; i++)
        {
            total += s.sales[i];
            s.max = s.max > s.sales[i] ? s.max : s.sales[i];
            s.min = s.min < s.sales[i] ? s.min : s.sales[i];
        } /* end for (int i = 0; i < QUARTERS; i++) */
        // only entered
        s.average = total / count;
        // all
        // s.average = total / QUARTERS;
    }
    void setSales(Sales & s)
    {
        using std::cout;
        using std::endl;
        using std::cin;
        double sales[QUARTERS] = {};
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "Enter sales of Q" << i+1 << ": ";
            while ( !(cin >> sales[i]) )
            {
                cin.clear();
                while (cin.get() != '\n') continue;
                cout << "Invalid sale, please re-enter: ";
            }
            // while (cin.get() != '\n') continue;
        } /* end for (int i = 0; i < QUARTERS; i++) */
        setSales(s, sales, QUARTERS);
    }
    void showSales(const Sales &s)
    {
        using std::cout;
        using std::endl;
        cout << "Sales:" << endl;
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "  Q" << i+1 << ": " << s.sales[i];
        } /* end for (int i = 0; i < QUARTERS; i++) */
        cout << endl;
        cout << "Max: " << s.max << endl;
        cout << "Min: " << s.min << endl;
        cout << "Avg: " << s.average << endl;
    }
}

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
    Sales::Sales(const double ar[], int n)
    {
        int count;
        double total;
        for (count = 0; count < QUARTERS && count < n; count++)
            m_sales[count] = ar[count];
        for (int i = count; i < QUARTERS; i++)
            m_sales[i] = 0;
        total = m_max = m_min = m_sales[0];
        for (int i = 1; i < count; i++)
        {
            total += m_sales[i];
            m_max = m_max > m_sales[i] ? m_max : m_sales[i];
            m_min = m_min < m_sales[i] ? m_min : m_sales[i];
        } /* end for (int i = 0; i < QUARTERS; i++) */
        // only entered
        m_average = total / count;
        // all
        // s.average = total / QUARTERS;
    }
    void Sales::setSales()
    {
        using std::cout, std::endl, std::cin;
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
        Sales s(sales, QUARTERS);
        for (int i = 0; i < QUARTERS; i++)
            this->m_sales[i] = s.m_sales[i];
        this->m_max = s.m_max;
        this->m_min = s.m_min;
        this->m_average = s.m_average;
    }
    void Sales::showSales() const
    {
        using std::cout, std::endl;
        cout << "Sales:" << endl;
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "  Q" << i+1 << ": " << m_sales[i];
        } /* end for (int i = 0; i < QUARTERS; i++) */
        cout << endl;
        cout << "Max: " << m_max << endl;
        cout << "Min: " << m_min << endl;
        cout << "Avg: " << m_average << endl;
    }
}

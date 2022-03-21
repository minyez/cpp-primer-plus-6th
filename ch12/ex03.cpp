/*
 * Date  : 2022-03-21 14:43:01
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include "stock.h"

const int STKS = 4;

int main(int argc, char** argv)
{
    using namespace std;
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5),
    };
    cout << "Stock holdings:\n";
    for (int i = 0; i < STKS; i++)
        cout << stocks[i] << endl;
    const Stock *top = &stocks[0];
    for (int i = 0; i < STKS; i++)
        top = &top->topval(stocks[i]);
    cout << "\nMost valuable holding:\n" << *top << endl;

    return 0;
}

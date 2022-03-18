/*
 * Date  : 2022-03-17 19:50:20
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <cstring>
#include "golf.h"

Golf::Golf(const char* fn, int hc)
{
    std::strcpy(fullname, fn);
    handicap = hc;
}

int Golf::setgolf()
{
    using std::cout, std::cin, std::endl;
    char next;
    char fn[Len] = "";
    int hc = 0;
    int if_entered_name = 0;
    cout << "Enter golfer name (emtpy to stop): ";
    if (cin.get(fn, Len))
    {
        if_entered_name = 1;
        cin.get(next);
        while (next != '\n') cin.get(next);
        cout << "                         Handicap: ";
        cin >> hc;
        cin.get(next);
        while (next != '\n') cin.get(next);
        Golf g(fn, hc);
        std::strcpy(fullname, g.fullname);
        handicap = g.handicap;
    }
    return if_entered_name;
}

void Golf::showgolf() const
{
    using std::cout, std::endl;
    cout << "Golfer name: " << fullname << "; handicap: " << handicap << endl;
}

void Golf::sethandicap(int hc)
{
    handicap = hc;
}

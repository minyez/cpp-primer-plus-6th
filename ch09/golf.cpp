/*
 * Date  : 2022-03-17 19:50:20
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf &g, const char *name, int hc)
{
    std::strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g)
{
    using std::cout;
    using std::cin;
    using std::endl;
    char next;
    int if_entered_name = 0;
    cout << "Enter golfer name (emtpy to stop): ";
    if (cin.get(g.fullname, Len))
    {
        if_entered_name = 1;
        cin.get(next);
        while (next != '\n') cin.get(next);
        cout << "                         Handicap: ";
        cin >> g.handicap;
        cin.get(next);
        while (next != '\n') cin.get(next);
    }
    return if_entered_name;
}

void showgolf(const golf &g)
{
    using std::cout;
    using std::endl;
    // if (strcmp(g.fullname, "") == 0)
    //     cout << "Empty golf name, will skip showing" << endl;
    // else
    cout << "Golfer name: " << g.fullname << "; handicap: " << g.handicap << endl;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

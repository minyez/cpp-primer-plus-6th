/*
 * Date  : 2022-03-24 15:34:21
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <cstring>
#include"cd1.h"

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    using std::strcpy;
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}


Cd::Cd(const Cd &d)
{
    using std::strcpy;
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

void Cd::Report() const
{
    using std::cout;
    using std::endl;
    cout << "performers: " << performers
         << ", label: " << label << ", selections: " << selections
         << ", playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd &d)
{
    using std::strcpy;
    if(this==&d) return *this;
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}


Classic::Classic(const char *mt, const char *s1, const char *s2, int n, double x)
    : Cd::Cd(s1, s2, n, x)
{
    using std::strcpy;
    strcpy(maintheme, mt);
}

void Classic::Report() const
{
    using std::cout;
    cout << "main theme: " << maintheme << ", ";
    Cd::Report();
}

Classic & Classic::operator=(const Classic &c)
{
    using std::strcpy;
    if(this==&c) return *this;
    Cd::operator=(c);
    strcpy(maintheme, c.maintheme);
    return *this;
}

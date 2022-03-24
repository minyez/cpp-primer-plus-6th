/*
 * Date  : 2022-03-24 15:34:21
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <cstring>
using std::strcpy;
using std::strlen;
#include"cd2.h"

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    performers = new char[strlen(s1)+1];
    strcpy(performers, s1);
    label = new char[strlen(s2)+1];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}


Cd::Cd(const Cd &d)
{
    performers = new char[strlen(d.performers)+1];
    strcpy(performers, d.performers);
    label = new char[strlen(d.label)+1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] label;
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
    if(this==&d) return *this;
    delete [] performers;
    performers = new char[strlen(d.performers)+1];
    strcpy(performers, d.performers);
    delete [] label;
    label = new char[strlen(d.label)+1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}


Classic::Classic(const char *mt, const char *s1, const char *s2, int n, double x)
    : Cd::Cd(s1, s2, n, x)
{
    maintheme = new char [strlen(mt)+1];
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
    if(this==&c) return *this;
    Cd::operator=(c);
    delete [] maintheme;
    maintheme = new char [strlen(c.maintheme)+1];
    strcpy(maintheme, c.maintheme);
    return *this;
}

Classic::~Classic()
{
    // Cd::~Cd(); // do not manually add base class desctructor
    delete [] maintheme;
}

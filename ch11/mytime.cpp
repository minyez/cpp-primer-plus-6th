/*
 * Date  : 2022-03-19 21:18:53
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <ostream>
#include "mytime.h"

void Time::proper_min() {
    if(minutes<0)
    {
        hours--;
        minutes += 60;
    }
}

Time::Time(int h, int m) { Reset(h, m); }

void Time::Reset(int h, int m)
{
    hours = h + m/60;
    minutes = m % 60;
    proper_min();
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes/60;
    minutes %= 60;
    proper_min();
}

void Time::AddHr(int h)
{
    hours += h;
}

Time operator+(const Time &t1, const Time &t2)
{
    return Time(t1.hours+t2.hours, t1.minutes+t2.minutes);
}

Time operator-(const Time &t1, const Time &t2)
{
    return Time(t1.hours-t2.hours, t1.minutes-t2.minutes);
}

Time operator*(const Time &t, double n)
{
    int totalmin = t.hours * 60 * n + t.minutes * n;
    return Time(0, totalmin);
}

Time operator*(double n, const Time &t)
{
    return t * n;
}

std::ostream & operator<<(std::ostream & os, const Time &t)
{
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}

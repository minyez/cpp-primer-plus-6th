/*
 * Date  : 2022-03-19 14:58:45
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include<cstdlib>
#include<ctime>
#include "play_olop.h"

Time::Time(int hour, int min, int sec)
{
    m = min + sec/60;
    s = sec%60;
    if(s<0) m--, s += 60;
    h = hour + m/60;
    m %= 60;
    if(m<0) h--, m += 60;
}

void Time::randomize(int maxh)
{
    using namespace std;
    srand(time(0));
    h = rand();
    if (maxh > 0) h %= maxh;
    srand(time(0));
    m = rand() % 60;
    srand(time(0));
    s = rand() % 60;
}

Time Time::operator+(const Time & t) const
{
    Time newt(h+t.h, m+t.m, s+t.s);
    return newt;
}

Time Time::operator-(const Time & t) const
{
    Time newt(h-t.h, m-t.m, s-t.s);
    return newt;
}

Time Time::operator*(int i) const
{
    return Time(h*i, m*i, s*i);
}

Time operator*(int i, const Time &t)
{
    return Time(t.h*i, t.m*i, t.s*i);
}

void Time::show() const
{
    using std::cout;
    using std::endl;
    // using the overloaded << function
    cout << *this << endl;
}

std::ostream & operator<<(std::ostream & os, const Time & t)
{
    os << "Time = " << t.h << ":" << t.m << ":" << t.s;
    return os;
}

int main(int argc, char** argv)
{
    using std::cout;
    using std::endl;
    Time t1(2, 23, -65), t2(3, 35, 56), t3, t4(4, 50, 52);
    t1.show();
    t2.show();
    t3 = t1 + t2;
    t3.show();
    t4.show();
    t3 = t3 - t4;
    t3.show();
    t3 = t3 * 2;
    t3.show();
    t3 = 2 * t3;
    cout << t3 << endl;
    t3.randomize(5);
    cout << t3 << endl;
    return 0;
}

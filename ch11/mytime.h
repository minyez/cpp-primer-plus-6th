#pragma once
#include <iostream>

class Time
{
    private:
        int hours;
        int minutes;
        void proper_min();
    public:
        Time() {hours = minutes = 0;};
        Time(int h, int m = 0);
        void AddMin(int m);
        void AddHr(int h);
        void Reset(int h = 0, int m = 0);
        friend Time operator+(const Time &, const Time &);
        friend Time operator-(const Time &, const Time &);
        friend Time operator*(const Time &, double);
        friend Time operator*(double, const Time &);
        friend std::ostream & operator<<(std::ostream & os, const Time &t);
};

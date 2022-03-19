/*
 * Date  : 2022-03-19 21:40:37
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
using std::cout;
#include "stonewt.h"

Stonewt::Stonewt(double lbs, Stonewt::Format f)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    form = f;
}

Stonewt::Stonewt(int stn, double lbs, Stonewt::Format f)
{
    stone = stn + int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs + stn * Lbs_per_stn;
    form = f;
}

Stonewt::~Stonewt() {}

Stonewt::Stonewt()
{
    stone = pds_left = pounds = 0;
    form = Format::DBPDS;
}

// overload plus
Stonewt operator+(const Stonewt & s1, const Stonewt & s2)
{
    return Stonewt(s1.pounds+s2.pounds);
}

Stonewt operator+(const Stonewt & s, int stn)
{
    return Stonewt(stn+s.stone, s.pds_left);
}

Stonewt operator+(int stn, const Stonewt & s)
{
    return s + stn;
}

Stonewt operator+(const Stonewt & s, double pds)
{
    return Stonewt(s.pounds + pds);
}

Stonewt operator+(double pds, const Stonewt & s)
{
    return s + pds;
}

// overload minus
Stonewt operator-(const Stonewt & s1, const Stonewt & s2)
{
    return Stonewt(s1.pounds-s2.pounds);
}

Stonewt operator-(const Stonewt & s, int stn)
{
    return Stonewt(s.stone-stn, s.pds_left);
}

Stonewt operator-(int stn, const Stonewt & s)
{
    return Stonewt(stn-s.stone, -s.pds_left);
}

Stonewt operator-(const Stonewt & s, double pds)
{
    return Stonewt(s.pounds - pds);
}

Stonewt operator-(double pds, const Stonewt & s)
{
    return Stonewt(pds - s.pounds);
}

// overload multiply, double only
Stonewt operator*(const Stonewt & s, double n)
{
    return Stonewt(s.pounds * n );
}

Stonewt operator*(double n, const Stonewt & s)
{
    return s * n;
}

std::ostream & operator<<(std::ostream & os, const Stonewt & s)
{
    if (s.form == Stonewt::Format::STONE)
        os << s.stone << " Stone";
    else if (s.form == Stonewt::Format::INTPDS)
        os << s.stone * Stonewt::Lbs_per_stn << " pounds (int)";
    else if (s.form == Stonewt::Format::DBPDS)
        os << s.pounds << " pounds";
    else
        os << "Invalid stone format";
    return os;
}

bool operator<(const Stonewt &s1, const Stonewt &s2) {return s1.pounds < s2.pounds;}
bool operator>(const Stonewt &s1, const Stonewt &s2) {return s1.pounds > s2.pounds;}
bool operator<=(const Stonewt &s1, const Stonewt &s2) {return s1.pounds <= s2.pounds;}
bool operator>=(const Stonewt &s1, const Stonewt &s2) {return s1.pounds >= s2.pounds;}
bool operator==(const Stonewt &s1, const Stonewt &s2) {return s1.pounds == s2.pounds;}
bool operator!=(const Stonewt &s1, const Stonewt &s2) {return s1.pounds != s2.pounds;}

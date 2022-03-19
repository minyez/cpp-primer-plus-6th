/*
 * Date  : 2022-03-19 18:07:07
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <ostream>
#include "complex0.h"

complex complex::operator+(const complex &c) const
{
    return complex(real+c.real, imag+c.imag);
}

complex complex::operator-(const complex &c) const
{
    return complex(real-c.real, imag-c.imag);
}

complex complex::operator*(const complex &c) const
{
    return complex(real*c.real-imag*c.imag, real*c.imag+imag*c.real);
}

complex complex::operator+(double d) const
{
    return complex(real+d, imag);
}

complex complex::operator-(double d) const
{
    return complex(real-d, imag);
}

complex complex::operator*(double d) const
{
    return complex(real*d, imag*d);
}

complex complex::operator-() const
{
    return complex(-real, -imag);
}

complex operator+(double d, const complex &c)
{
    return c + d;
}

complex operator-(double d, const complex &c)
{
    return c - d;
}

complex operator*(double d, const complex &c)
{
    return c * d;
}

std::ostream & operator<<(std::ostream & os, const complex &c)
{
    os << "(" << c.real << "," << c.imag << "i)";
    return os;
}

std::istream & operator>>(std::istream & is, complex &c)
{
    using std::cout;
    cout << "real: ";
    if (!(is >> c.real)) return is; // break with invalid input
    cout << "imaginary: ";
    is >> c.imag;
    return is;
}

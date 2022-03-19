/*
 * Date  : 2022-03-19 19:53:12
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include<cmath>
#include <ostream>
#include "vect.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan2;
using std::cout;
using std::endl;

namespace VECTOR
{
    const double Rad_to_deg = 45.0 / atan2(1.0, 1.0);
    void Vector::set_mag() {mag = sqrt(x*x+y*y);}
    void Vector::set_ang() {ang = x==0.0&&y==0.0 ? 0.0 : atan2(y, x);}
    void Vector::set_x() {x = mag * cos(ang);}
    void Vector::set_y() {y = mag * sin(ang);}
    // public
    Vector::Vector(double n1, double n2, Mode form) {reset(n1, n2, form);}
    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_ang();
            set_mag();
        }
        else if (form == POL)
        {
            mag = n1;
            ang = n2;
            set_x();
            set_y();
        }
        else
        {
            cout << "Invalid 3rd argument -- vector reset to 0" << endl;
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }
    void Vector::rect_mode() {mode = RECT;}
    void Vector::polar_mode() {mode = POL;}

    Vector Vector::operator+(const Vector &b) const
    {
        return Vector(x+b.x, y+b.y);
    }

    Vector Vector::operator-(const Vector &b) const
    {
        return Vector(x-b.x, y-b.y);
    }

    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }

    Vector Vector::operator*(double n) const
    {
        return Vector(x*n, y*n);
    }

    Vector operator*(double n, const Vector &a)
    {
        return a * n;
    }

    std::ostream & operator<<(std::ostream & os, const Vector &v)
    {
        if (v.mode == Vector::RECT)
            os << "(x,y) = (" << v.x << "," << v.y << ")";
        else if (v.mode == Vector::POL)
            os << "(m,a) = (" << v.mag << "," << v.ang * Rad_to_deg << ")";
        else
            os << "Vector object mode is invalid";
        return os;
    }
}

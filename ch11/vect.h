#pragma once
#include <iostream>
#include <ostream>

namespace VECTOR
{
    class Vector
    {
        public:
            enum Mode {RECT, POL};
        private:
            double x;
            double y;
            double mag;
            double ang;
            Mode mode;
            void set_mag();
            void set_ang();
            void set_x();
            void set_y();
        public:
            Vector() { x = y = mag = ang = 0.0; mode = RECT;};
            Vector(double, double, Mode form = RECT);
            void reset(double, double, Mode form = RECT);
            ~Vector() {};
            double xval() const {return x;}
            double yval() const {return y;}
            double magval() const {return mag;}
            double angval() const {return ang;}
            void polar_mode();
            void rect_mode();
            // operator overloading
            Vector operator+(const Vector &) const;
            Vector operator-(const Vector &) const;
            Vector operator-() const;
            Vector operator*(double) const;
            // friends
            friend Vector operator*(double, const Vector &);
            friend std::ostream & operator<<(std::ostream &, const Vector &);
    };
}

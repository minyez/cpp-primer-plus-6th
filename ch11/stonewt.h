#pragma once
#include <iostream>

class Stonewt
{
    private:
        enum {Lbs_per_stn = 14}; // pounds per stone
        enum Format {STONE, INTPDS, DBPDS};
        int stone;               // whole stones
        double pds_left; // farctional pounds
        double pounds; // entire weight in pounds
        Format form;
    public:
        Stonewt(double lbs, Format f = DBPDS);
        Stonewt(int stn, double lbs, Format f = DBPDS);
        Stonewt();
        ~Stonewt();
        void f_stone() { form = Format::STONE; };
        void f_intpds() { form = Format::INTPDS; };
        void f_dbpds() { form = Format::DBPDS; };
        // overload arithmatic
        friend Stonewt operator+(const Stonewt &, const Stonewt &);
        friend Stonewt operator+(const Stonewt &, int);
        friend Stonewt operator+(int, const Stonewt &);
        friend Stonewt operator+(const Stonewt &, double);
        friend Stonewt operator+(double, const Stonewt &);
        friend Stonewt operator-(const Stonewt &, const Stonewt &);
        friend Stonewt operator-(const Stonewt &, int);
        friend Stonewt operator-(int, const Stonewt &);
        friend Stonewt operator-(const Stonewt &, double);
        friend Stonewt operator-(double, const Stonewt &);
        friend Stonewt operator*(const Stonewt &, double);
        friend Stonewt operator*(double, const Stonewt &);
        friend std::ostream & operator<<(std::ostream &, const Stonewt &);
        // overload relation
        friend bool operator<(const Stonewt &, const Stonewt &);
        // friend Stonewt operator<(const Stonewt &, int);
        // friend Stonewt operator<(const Stonewt &, double);
        // friend Stonewt operator<(int, const Stonewt &);
        // friend Stonewt operator<(double, const Stonewt &);

        friend bool operator<=(const Stonewt &, const Stonewt &);
        // friend Stonewt operator<=(const Stonewt &, int);
        // friend Stonewt operator<=(const Stonewt &, double);
        // friend Stonewt operator<=(int, const Stonewt &);
        // friend Stonewt operator<=(double, const Stonewt &);

        friend bool operator>(const Stonewt &, const Stonewt &);
        // friend Stonewt operator>(const Stonewt &, int);
        // friend Stonewt operator>(const Stonewt &, double);
        // friend Stonewt operator>(int, const Stonewt &);
        // friend Stonewt operator>(double, const Stonewt &);

        friend bool operator>=(const Stonewt &, const Stonewt &);
        // friend Stonewt operator>=(const Stonewt &, int);
        // friend Stonewt operator>=(const Stonewt &, double);
        // friend Stonewt operator>=(int, const Stonewt &);
        // friend Stonewt operator>=(double, const Stonewt &);

        friend bool operator!=(const Stonewt &, const Stonewt &);
        // friend Stonewt operator!=(const Stonewt &, int);
        // friend Stonewt operator!=(const Stonewt &, double);
        // friend Stonewt operator!=(int, const Stonewt &);
        // friend Stonewt operator!=(double, const Stonewt &);

        friend bool operator==(const Stonewt &, const Stonewt &);
        // friend Stonewt operator==(const Stonewt &, int);
        // friend Stonewt operator==(const Stonewt &, double);
        // friend Stonewt operator==(int, const Stonewt &);
        // friend Stonewt operator==(double, const Stonewt &);
};

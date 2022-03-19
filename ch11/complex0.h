#include <iostream>
class complex
{
    private:
        double real;
        double imag;
    public:
        // constructor
        complex() { real = imag = 0.0; };
        explicit complex(double re, double im = 0.0) { real = re; imag = im; };
        // destructor
        ~complex() {};
        complex conj() const { return complex(real, -imag); };
        // overload operators
        complex operator~() const { return conj(); };
        complex operator+(const complex &) const;
        complex operator-(const complex &) const;
        complex operator*(const complex &) const;
        // complex operator/(const complex &) const;
        complex operator+(double) const;
        complex operator-(double) const;
        complex operator*(double) const;
        complex operator-() const;
        // friend complex operator/(double, const complex &);
        friend std::ostream & operator<<(std::ostream &, const complex &);
        friend std::istream & operator>>(std::istream &, complex &);
};

// the following functions
// complex operator/(double) const;
complex operator+(double, const complex &);
complex operator-(double, const complex &);
complex operator*(double, const complex &);

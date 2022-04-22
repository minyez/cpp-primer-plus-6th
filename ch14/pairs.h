#pragma once
#include <iostream>

template <class T1, class T2>
class Pair
{
    private:
        T1 a;
        T2 b;
    public:
        Pair(const T1 & aval, const T2 & bval): a(aval), b(bval) {}
        Pair() {}
        T1 & first() { return a; }
        T2 & second() { return b; }
        T1 first() const { return a; }
        T1 second() const { return b; }
};

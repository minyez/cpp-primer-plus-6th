#pragma once
#include <string>
#include <valarray>
#include "pairs.h"
using std::string;

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine
{
    private:
        string name;
        int nyears;
        PairArray year_num;
    public:
        Wine(const char *l, int y, const int yr[], const int bot []);
        Wine(const char *l, int y);
        void GetBottles();
        void Show();
        string & Label() { return name; }
        int sum() const;
};

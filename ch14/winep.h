#pragma once
#include <string>
#include <valarray>
#include "pairs.h"
using std::string;

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine: private string, private PairArray
{
    private:
        int nyears;
    public:
        // note nyears at last. otherwise will have -Wreorder warning
        Wine(const char *l, int y, const int yr[], const int bot []):
            string(l), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)), nyears(y) {}
        // note nyears at last. otherwise will have -Wreorder warning
        Wine(const char *l, int y):
            string(l), PairArray(ArrayInt(y), ArrayInt(y)), nyears(y) {}
        void GetBottles();
        void Show();
        string & Label() { return (string &) *this; }
        int sum() const;
};

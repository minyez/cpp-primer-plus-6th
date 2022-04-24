#include <iostream>
#include <list>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
class TooBig
{
    private:
        T cutoff;
    public:
        TooBig(const T &t): cutoff(t) {cout << "Cutoff object created with " << t << endl;}
        TooBig(const TooBig &tb): cutoff(tb.cutoff) {cout << "Cutoff object copied from " << tb.cutoff << endl;}
        bool operator()(const T &v) { return v > cutoff; }
        ~TooBig() { cout << "Cutoff object removed!" << endl; }
};

void outint(int n) { cout << n << " "; }

int main(int argc, char** argv)
{
    TooBig<int> f100(100);
    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    list<int> yadayada(vals, vals+10); // range constructor
    // C++ 11
    list<int> etcetera {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    cout << "Object as functor.\n";
    cout << "Original lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;
    // by copy constructor
    yadayada.remove_if(f100);
    // anonymous by constructor
    yadayada.remove_if(TooBig<int>(200));
    cout << "Trimmed lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;

    return 0;
}

#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cmath>
#include <algorithm>
#include <functional>
using namespace std;

double mean(double x, double y) { return 0.5*(x+y); }

int main(int argc, char** argv)
{
    
    cout << "transform with predefined functors" << endl;
    ostream_iterator<double, char> out(cout, " ");
    const int LIM = 5;
    double arr1[LIM] = {36, 39, 42, 45, 48};
    vector<double> gr8(arr1, arr1 + LIM);
    // cout << sqrt(5) << endl;
    // transform(gr8.begin(), gr8.end(), out, sqrt); // no matching function
    transform(gr8.begin(), gr8.end(), out, ::sqrt); // no matching function
    cout << endl;
    transform(gr8.begin(), gr8.end(), gr8.rbegin(), out, mean); cout << endl;
    transform(gr8.begin(), gr8.end(), gr8.begin(), out, minus<double>()); cout << endl;
    
    // adapatable functors
    // bind1st from functional
    transform(gr8.begin(), gr8.end(), out,
              bind1st(multiplies<double>(), 2)); cout << endl;
    transform(gr8.begin(), gr8.end(), out,
              bind1st(minus<double>(), 20)); cout << endl;
    transform(gr8.begin(), gr8.end(), out,
              bind2nd(minus<double>(), 20)); cout << endl;


    return 0;
}

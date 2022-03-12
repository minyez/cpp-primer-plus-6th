/*
 * Date  : 2022-03-12 15:11:31
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <cmath>
using namespace std;
const double eps = 1.e-7;

double harmmean(double, double);

int main(int argc, char** argv) {

    double a, b;
    while (cout << "Enter two number (0 to abort): ") {
        // check bad input
        while (!(cin >> a >> b)) {
            cin.clear();
            while (cin.get() != '\n') continue;
            cout << "Please re-enter (0 to abort): ";
        }
        if (abs(a) < eps || abs(b) < eps) break;
        cout << "Harmonic mean of " << a << " and " << b << ": " << harmmean(a, b) << endl;
    }
    cout << "Bye :)" << endl;

    return 0;
}

double harmmean(double a, double b) {
    return 2.0 * a * b / (a+b);
}

/*
 * Date  : 2022-03-12 19:03:20
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
using namespace std;

long double factorial(int n);

long double factorial(int n) {
    long double x;
    x = 1.0;
    if (n == 0)
        return 1;
    else
        x = n * factorial(n-1);
    return x;
}

int main(int argc, char** argv) {

    int n;
    while (cout << "Enter one integer (negative to abort): ") {
        // check bad input
        while (!(cin >> n)) {
            cin.clear();
            while (cin.get() != '\n') continue;
            cout << "Please re-enter (negative to abort): ";
        }
        if (n < 0) break;
        cout << "Factorial of " << n << ": " << factorial(n) << endl;
    }
    cout << "Bye :)" << endl;

    return 0;
}

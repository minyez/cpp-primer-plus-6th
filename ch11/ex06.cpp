/*
 * Date  : 2022-03-19 18:17:10
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
using namespace std;
#include "complex0.h"

int main(int argc, char** argv)
{
    complex a(3.0, 4.0); // initliaze to (3,4i)
    complex c;
    while (cout << "enter a complex number (q to quit):\n" && cin >> c)
    {
        cout << "c is " << c << endl;
        cout << "complex conjugate is " << ~c << endl;
        cout << "a is " << a << endl;
        cout << "a + c is " << a + c << endl;
        cout << "a - c is " << a - c << endl;
        cout << "a * c is " << a * c << endl;
        cout << "2 * c is " << 2 * c << endl;
    }
    cout << "Done!" << endl;
    return 0;
}

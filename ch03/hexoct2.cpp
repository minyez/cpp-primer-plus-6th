/*
 * Date  : 2019-11-09 16:04:06
 * Author: Min-Ye Zhang
 * Usage : shows hex and octal literals
 * TODO  : 
 */

#include <iostream>

int main(int argc, char** argv) {

    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex; // change base
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct; // change base
    cout << "inseam = " << inseam << " (octal for 42)" << endl;

    return 0;
}

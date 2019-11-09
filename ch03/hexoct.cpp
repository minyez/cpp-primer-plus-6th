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
    int waist = 0x42;
    int inseam = 042;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (42 in decimal)" << endl;
    cout << "waist = " << waist << " (0x42 in hex)" << endl;
    cout << "inseam = " << inseam << " (042 in octal)" << endl;

    return 0;
}

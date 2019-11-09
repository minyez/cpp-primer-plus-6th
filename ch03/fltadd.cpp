/*
 * Date  : 2019-11-09 21:09:39
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>

int main(int argc, char** argv) {

    using namespace std;
    float fa = 2.34E15f;
    float fb = fa - 1.0f;
    double da = 2.34E15; // try E16 and E15 to see difference
    double db = da - 1.0E0;

    cout << "fb - fa = " << fb - fa << endl;
    cout << "db - da = " << db - da << endl;

    return 0;
}

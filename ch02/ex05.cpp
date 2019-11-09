/*
 * Date  : 2019-11-09 15:20:12
 * Author: Min-Ye Zhang
 * Usage : 
 */

#include <iostream>
using namespace std;

double cel_to_fah(double cd);

int main(int argc, char** argv) {

    double cd;
    cout << "Please enter a Celsius value: ";
    cin >> cd;
    cout << cd << " degrees Celsius is " << cel_to_fah(cd) << " degrees Fahrenheit." << endl;

    return 0;
}

double cel_to_fah(double cd) {
    return cd * 1.8 + 32.0;
}

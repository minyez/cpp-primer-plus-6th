/*
 * Date  : 2019-11-09 15:20:12
 * Author: Min-Ye Zhang
 * Usage : 
 */

#include <iostream>
using namespace std;

double ly_to_au(double ly);

int main(int argc, char** argv) {

    double ly;
    cout << "Enter the number of light years: ";
    cin >> ly;
    cout << ly << " light years = " << ly_to_au(ly) << " astronomical units." << endl;

    return 0;
}

double ly_to_au(double ly) {
    return ly * 63240;
}

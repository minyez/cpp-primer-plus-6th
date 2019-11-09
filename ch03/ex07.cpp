#include<iostream>
using namespace std;

int main(int argc, char** argv) {

    double l_per_100km;
    const double mile_to_km = 100 / 62.14;
    const double gallon_to_l = 3.875;

    cout << "Enter consumption in Euro style (L/100km): ";
    cin >> l_per_100km;
    cout << l_per_100km << "/100km = " << gallon_to_l/mile_to_km/l_per_100km*100  << "mpg" << endl;
    

    return 0;

}
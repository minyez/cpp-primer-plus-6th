#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    const int inch_per_foot = 12;
    int inches = 0;
    int foot = 0;
    cout << "Enter your height in inches: _____\b\b\b\b\b";
    cin >> inches;
    foot = inches;
    inches = inches % inch_per_foot;
    foot = (foot-inches)/inch_per_foot;
    cout << "Your height is " << foot << " foot " << inches << " inches." << endl;

    return 0;
}

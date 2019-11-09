#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {

    const int inch_per_foot = 12;
    int inch = 0;
    int foot = 0;
    double pound = 0;
    cout << "Feet of your height: ";
    cin >> foot;
    cout << "Inches of your height: ";
    cin >> inch;
    cout << "Your weight in pounds: ";
    cin >> pound;
    inch = foot * inch_per_foot + inch;
    cout << "Your BMI is " << pound/2.2/pow(inch * 0.0254, 2) << endl;

    return 0;
}
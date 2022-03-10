/*
 * Date  : 2022-03-10 16:06:28
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
using namespace std;

float compute_tax(int income) {
    float tax = 0.0;
    if (income > 35000)
        tax = (income - 35000) * 0.20 + 3000 + 1000;
    else if (income > 15000)
        tax = (income - 15000) * 0.15 + 1000;
    else if (income > 5000)
        tax = (income - 5000) * 0.10;
    return tax;
}

int main(int argc, char** argv) {

    int income;
    float tax;
    cout << "Enter your income (in tvarps): ";
    cin >> income;
    while ( cin.good() && income > 0 ) {
        tax = compute_tax(income);
        cout << "Tax: " << tax << " tvarps" << endl;
        cout << "Enter your income (in tvarps): ";
        cin >> income;
    }

    return 0;
}

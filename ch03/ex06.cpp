#include<iostream>
using namespace std;

void euro_style();
void usa_style();

int main(int argc, char** argv) {

    int style;
    cout << "Choose input style: Euro(0) or USA (otherwise): ";
    cin >> style;
    if (style==0) {
        euro_style();
    } else {
        usa_style();
    }

    return 0;
}

void usa_style() {
    double mile;
    double gallon;

    cout << "Enter distance (miles) = ";
    cin >> mile;
    cout << "Enter oil consumption (gallon) = ";
    cin >> gallon;
    cout << "Your distance per gallon = " << mile/gallon << endl;
}

void euro_style() {
    double kilo;
    double litre;

    cout << "Enter distance (kilometres) = ";
    cin >> kilo;
    cout << "Enter oil consumption (litres) = ";
    cin >> kilo;
    cout << "Your litres per 100km = " << litre/kilo*100 << endl;
}
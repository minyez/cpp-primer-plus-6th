/*
 * Date  : 2022-03-16 21:22:08
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <cstring>
using namespace std;

const int STRLEN = 80;

struct CandyBar {
    char brand[STRLEN];
    double weight;
    int calorie;
};

void set_candybar(CandyBar &, const char* = "Millennium Munch",
                  const double = 2.85, const int = 350);

void show_candybar(const CandyBar &);

int main(int argc, char** argv) {

    CandyBar de;
    cout << "A default candy bar as example:" << endl;
    set_candybar(de);
    show_candybar(de);
    cout << endl;

    char s[STRLEN];
    double w;
    int ca;
    cout << "Enter the information of the candy bar:" << endl;
    cout << "    Brand: ";
    cin.getline(s, STRLEN);
    cout << "   Weight: ";
    cin >> w;
    cout << "  Calorie: ";
    cin >> ca;
    CandyBar manual;
    set_candybar(manual, s, w, ca);
    cout << endl;
    cout << "The candy bar you have just entered:" << endl;
    show_candybar(manual);

    return 0;
}

void set_candybar(CandyBar & cb, const char* s, const double w, const int ca)
{
    strcpy(cb.brand, s);
    cb.weight = w;
    cb.calorie = ca;
}

void show_candybar(const CandyBar & cb)
{
    cout << "    Brand: " << cb.brand << endl;
    cout << "   Weight: " << cb.weight << endl;
    cout << "  Calorie: " << cb.calorie << endl;
}

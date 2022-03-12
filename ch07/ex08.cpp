/*
 * Date  : 2022-03-12 19:48:56
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <string>
using namespace std;

const int NSEASONS = 4;
const char *SEASON_STR[NSEASONS] = {"Spring", "Summer", "Autumn", "Winter"};

struct Expense
{
    double values[NSEASONS];
};

void fill_ar(double *);
void show_ar(const double *);
void fill_st(Expense *);
void show_st(Expense *);

int main(int argc, char** argv)
{
    double e_ar[NSEASONS] = {};
    cout << "Array version:" << endl;
    fill_ar(e_ar);
    show_ar(e_ar);
    cout << endl;

    Expense e;
    cout << "Struct version:" << endl;
    fill_st(&e);
    show_st(&e);
    return 0;
}


void fill_ar(double *a) {
    for (int i = 0; i < NSEASONS; i++) {
        cout << "Enter " << SEASON_STR[i] << " expenses: ";
        cin >> a[i];
    } /* end for (int i = 0; i < NSEASONS; i++) */
}

void show_ar(const double *ar) {
    double total = 0.0;
    cout << "EXPENSES" << endl;
    for (int i = 0; i < NSEASONS; i++) {
        cout << SEASON_STR[i] << ": $" << ar[i] << endl;
        total += ar[i];
    } /* end for (int i = 0; i < NSEASONS; i++) */
    cout << "Total Expenses: $" << total << endl;
}

void fill_st(Expense *a) {
    for (int i = 0; i < NSEASONS; i++) {
        cout << "Enter " << SEASON_STR[i] << " expenses: ";
        cin >> a->values[i];
    } /* end for (int i = 0; i < NSEASONS; i++) */
}

void show_st(Expense *e) {
    double total = 0.0;
    cout << "EXPENSES" << endl;
    for (int i = 0; i < NSEASONS; i++) {
        cout << SEASON_STR[i] << ": $" << e->values[i] << endl;
        total += e->values[i];
    } /* end for (int i = 0; i < NSEASONS; i++) */
    cout << "Total Expenses: $" << total << endl;
}


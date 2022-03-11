/*
 * Date  : 2022-03-11 17:41:42
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <array>
#include <string>

using namespace std;
const int NSEASONS = 4;
const array<string, NSEASONS> SEASON_STR = {"Spring", "Summer", "Autumn", "Winter"};

// void fill(double *a, int n) {
//     for (int i = 0; i < n; i++) {
//         cout << "Enter " << SEASON_STR[i] << " expenses: ";
//         cin >> a[i];
//     } /* end for (int i = 0; i < NSEASONS; i++) */
// }

void fill(array<double, NSEASONS> *pa) {
    for (int i = 0; i < NSEASONS; i++) {
        cout << "Enter " << SEASON_STR[i] << " expenses: ";
        cin >> (*pa)[i];
        // input pa is pointer to an array, not array itself, so not pa[i]
    } /* end for (int i = 0; i < NSEASONS; i++) */
}

void show(const array<double, NSEASONS> *da) {
    double total = 0.0;
    cout << "EXPENSES" << endl;
    for (int i = 0; i < NSEASONS; i++) {
        cout << SEASON_STR[i] << ": $" << (*da)[i] << endl;
        total += (*da)[i];
    } /* end for (int i = 0; i < NSEASONS; i++) */
    cout << "Total Expenses: $" << total << endl;
}

int main(int argc, char** argv) {

    array<double, NSEASONS> expense = {};
    fill(&expense);
    show(&expense);

    return 0;
}

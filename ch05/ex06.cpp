/*
 * Date  : 2022-03-09 19:52:56
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */

const int nyears = 3;

#include <iostream>
int main(int argc, char** argv) {

    using namespace std;
    int sum = 0, sumy[3] = {};
    const char *months[12] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    int sales[nyears][12] = {};
    for (int y = 0; y < nyears; y++) {
        for (int i = 0; i < 12;  i++) {
            cout << "Sales of year " << y+1 << ", " << months[i] << "? ";
            cin >> sales[y][i];
            sumy[y] += sales[y][i];
        } /* end for (int i = 0; i < 12;  i++) */
        sum += sumy[y];
    } /* end for (int y = 0; y < nyears; y++) */

    for (int y = 0; y < nyears; y++) {
        cout << "Sales of year " << y+1 << ": " << sumy[y] << endl;
    } /* end for (int y = 0; y < nyears; y++) */
    cout << "Total sales of " << nyears << " years: " << sum << endl;

    return 0;
}

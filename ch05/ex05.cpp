/*
 * Date  : 2022-03-09 19:52:56
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */

#include <iostream>
int main(int argc, char** argv) {

    using namespace std;
    int sum = 0;
    const char *months[12] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    int sales[12] = {};
    for (int i = 0; i < 12;  i++) {
        cout << "Sales of " << months[i] << "? ";
        cin >> sales[i];
        sum += sales[i];
    } /* end for (int i = 0; i < 12;  i++) */

    cout << "Total sales: " << sum << endl;

    return 0;
}

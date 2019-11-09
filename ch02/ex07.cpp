/*
 * Date  : 2019-11-09 15:20:12
 * Author: Min-Ye Zhang
 * Usage : 
 */

#include <iostream>
using namespace std;

void show_time(int m, int s);

int main(int argc, char** argv) {

    int m;
    int s;
    cout << "Enter the number of hours: ";
    cin >> m;
    cout << "Enter the number of minutes: ";
    cin >> s;

    show_time(m, s);

    return 0;
}

void show_time(int m, int s) {
    cout << "Time: " << m << ":" << s << endl;
}

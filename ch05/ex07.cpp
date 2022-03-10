/*
 * Date  : 2022-03-09 20:18:47
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct car {
    string make;
    int year;
};

string get_make_v1() {
    char ch;
    string make = "";
    ch = getchar();
    while (ch != '\n') {
        make += ch;
        ch = getchar();
    }
    return make;
}

string get_make_v2() {
    char ch[80];
    string make = "";
    cin.getline(ch, 80);
    make = ch;
    return make;
}

string get_make_v3() {
    string make = "";
    cin >> make; // cannot read multiple words
    return make;
}

int main(int argc, char** argv) {

    int ncars = 2;
    cout << "How many cars do you wish to catalog? ";
    cin >> ncars;
    getchar();
    car *cars = new car [ncars];
    for (int i = 0; i < ncars; i++) {
        cout << "Car #" << i+1 << ":" << endl;
        cout << "Please enter the make: ";
        getline(cin, cars[i].make);
        // cars[i].make = get_make_v1(); // also work
        // cars[i].make = get_make_v2(); // also work
        // cars[i].make = get_make_v3(); // not work
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
        getchar();
    } /* end for (int i = 0; i < ncars;  i++) */

    cout << "Here is your collection:" << endl;
    for (int i = 0; i < ncars; i++) {
        cout << cars[i].year << " " << cars[i].make << endl;
    } /* end for (int i = 0; i < ncars; i++) */

    return 0;
}

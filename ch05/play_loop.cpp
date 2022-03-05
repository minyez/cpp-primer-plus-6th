/*
 * Date  : 2022-03-05 14:54:05
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <string>
#include <ctime>

int main(int argc, char** argv) {

    using namespace std;
    int j;
    // reverse print a string
    string word;
    cout << "Reversing your string:" << endl;
    cin >> word;
    for (int i = word.size() - 1; i >= 0; i--) {
        cout << word[i];
    }
    cout << endl << endl;

    j = 0;
    // while loop, also check side effect:
    //   * j++ expression -> j
    //   * (j++ < 10) evaluates the side effect: add 1 to j
    while (j++ < 10) cout << j << endl;
    j = 2;
    cout << j++ << endl; // 2
    cout << ++j << endl; // 4
    cout << j << endl; // 4

    float secs = 0.5;
    cout << "Delaying " << secs << " seconds... ";
    // if not flush, the above will be printed with the End below after the delay.
    cout.flush();
    clock_t delay = secs * CLOCKS_PER_SEC;
    clock_t start = clock();
    while (clock()-start < delay)
        ;
    cout << "End" << endl;

    // do..while loop
    do cout << j++ << endl; while (j++ < 12);

    // range-based for loop
    double prices[5] = {4.99, 10.9, 6.87, 7.99, 8.49};
    // this does not change the actual value of prices
    for (double x : prices) {
        x *= 0.80;
    }
    for (double x : prices) {
        cout << x << endl;
    }
    // this will
    for (double &x : prices) {
        x *= 0.80;
    }
    for (double x : prices) {
        cout << x << endl;
    }

    return 0;
}

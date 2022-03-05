/*
 * Date  : 2022-03-05 14:54:05
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <string>

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
    // check side effect:
    //   * j++ expression -> j
    //   * (j++ < 10) evaluates the side effect: add 1 to j
    while (j++ < 10) cout << j << endl;
    j = 2;
    cout << j++ << endl; // 2
    cout << ++j << endl; // 4
    cout << j << endl; // 4

    return 0;
}

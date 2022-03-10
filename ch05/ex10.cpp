/*
 * Date  : 2022-03-10 11:23:10
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int nrows;
    cout << "Enter number of rows: ";
    cin >> nrows;

    for (int i = 0; i < nrows; i++) {
        for (int j = 0; j < nrows - i - 1; j++) {
            cout << ".";
        } /* end for (int j = 0; j < nrows - j; j++) */
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        } /* end for (int j = 0; j < nrows - j; j++) */
        cout << endl;
    } /* end for (int i = 0; i < nrows; i++) */

    return 0;
}

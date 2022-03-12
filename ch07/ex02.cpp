/*
 * Date  : 2022-03-12 15:24:45
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
using namespace std;

const int maxsize = 10;
typedef int gg; // golf grade

int golf_input(gg *, int);
void golf_show(gg *, int);
void golf_mean(gg *, int);

int main(int argc, char** argv) {
    
    gg golf_grads[maxsize] = {};
    int n;
    n = golf_input(golf_grads, maxsize);
    if (n < 1) {
        cout << "No grade is entered, stop." << endl;
        return 0;
    }
    golf_show(golf_grads, n);
    golf_mean(golf_grads, n);

    return 0;
}

int golf_input(gg *ar, int n) {
    int count;
    for (count = 0; count < n; count++) {
        cout << "Enter #" << count+1 << " golf record (negative to break): ";
        while(!(cin >> ar[count])) {
            // clean bad input
            cin.clear();
            while(cin.get() != '\n') continue;
            cout << "Please re-enter: ";
        }
        if (ar[count] < 0) {
            ar[count] = 0.0;
            break;
        }
    } /* end for (count = 0; count < n; count++) */
    return count;
}

void golf_show(gg *ar, int n) {
    cout << "All grades:";
    for (int i = 0; i < n; i++) {
        cout << " " << ar[i];
    } /* end for (int i = 0; i < n; i++) */
    cout << endl;
}

void golf_mean(gg *ar, int n) {
    double mean = 0.0;
    for (int i = 0; i < n; i++) {
        mean += ar[i];
    } /* end for (int i = 0; i < n; i++) */
    mean /= n;
    cout << "Mean grade: " << mean << endl;
}

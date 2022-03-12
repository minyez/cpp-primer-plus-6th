/*
 * Date  : 2022-03-12 19:12:17
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
using namespace std;

const int maxsize = 8;

int Fill_aray(double *, int n);
void Show_aray(const double *, int n);
void Reverse_aray(double *, int n);

int main(int argc, char** argv) {

    double ar[maxsize] = {};
    int count = Fill_aray(ar, maxsize);
    if (count == 0) {
        cout << "No number entered, bye :)";
        return -1;
    }
    Show_aray(ar, count);
    Reverse_aray(ar, count);
    Show_aray(ar, count);
    Reverse_aray(ar+1, count-2);
    Show_aray(ar, count);
    return 0;
}

int Fill_aray(double *ar, int n) {
    int count;
    for (count = 0; count < maxsize; count++) {
        cout << "Enter number #" << count+1 << ": ";
        if(!(cin >> ar[count])) break;
    }
    return count;
}

void Show_aray(const double *ar, int n) {
    for (int i = 0; i < n-1; i++) {
        cout << ar[i] << " ";
    } /* end for (int i = 0; i < n; i++) */
    cout << ar[n-1] << endl;
}

void Reverse_aray(double *ar, int n) {
    double tmp;
    for (int i = 0; i <= n/2; i++) {
        tmp = ar[i];
        ar[i] = ar[n-1-i];
        ar[n-1-i] = tmp;
    } /* end for (int i = 0; i < n/2; i++) */
}

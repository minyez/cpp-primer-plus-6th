/*
 * Date  : 2022-03-19 22:37:14
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include "stonewt.h"

const int N = 6;

int main(int argc, char** argv)
{
    using namespace std;
    Stonewt ss[N] = {125.0, 234.0, 154};
    const Stonewt *max, *min;
    Stonewt refst(11, 0.0);
    max = min = ss;
    int count = 0;
    double pds;

    for (int i = 3; i < N; i++)
    {
        cout << "Enter the pounds of stone " << i+1 << ": ";
        cin >> pds;
        ss[i] = pds; // implicit typecast
    } /* end for (int i = 3; i < N; i++) */

    for (int i = 0; i < N; i++)
    {
        max = ss[i] > *max ? ss+i : max;
        min = ss[i] < *min ? ss+i : min;
        if (ss[i] >= refst) count++;
    } /* end for (int i = 0; i < N; i++) */
    cout << "Max stone weight: " << *max << endl;
    cout << "Min stone weight: " << *min << endl;
    cout << "# > 11 stones: " << count << endl;
    return 0;
}

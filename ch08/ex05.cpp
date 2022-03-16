/*
 * Date  : 2022-03-16 21:53:32
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
using namespace std;
const int maxsize = 5;

template <typename T>
T max5(const T [maxsize]);
template <typename T>
void printa(const T [maxsize]);

int main(int argc, char** argv) {

    int iar[maxsize] = {-1, 5, -7, 10, 12};
    double dar[maxsize] = {-2.3, -5.10, 8.2, 19.0, -23.1};

    cout << "Int Array: ";
    printa(iar);
    cout << "Maximal = " << max5(iar) << endl;

    cout << "Double Array: ";
    printa(dar);
    cout << "Maximal = " << max5(dar) << endl;

    return 0;
}

template <typename T>
T max5(const T ar[maxsize])
{
    T m = ar[0];
    for (int i = 1; i < maxsize; i++)
        m = ar[i] > m ? ar[i] : m;
    return m;
}

template <typename T>
void printa(const T ar[maxsize])
{
    for (int i = 0; i < maxsize-1; i++)
        cout << ar[i] << ", ";
    cout << ar[maxsize-1] << endl;
}

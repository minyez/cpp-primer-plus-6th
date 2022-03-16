/*
 * Date  : 2022-03-16 19:00:45
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
using namespace std;

template <typename T>
void Swap(T &a, T &b);
template <typename T>
void Swap(T a[], T b[], int n);
template <typename T>
void Show(T &a, T &b);
template <typename T>
void Show(T a[], T b[], T c[]);


int main(int argc, char** argv) {

    int ia = 1, ib = 2;
    double da = -1.0, db = 3.0;
    char stra[10] = "hello";
    char strb[10] = "world";
    char strc[12] = "goodbye";
    Show(ia, ib);
    Swap(ia, ib);
    Show(ia, ib);

    Show(da, db);
    Swap(da, db);
    Show(da, db);

    // Swap<double>(ia, da); // cannot compile

    Show(stra, strb, strc);
    Swap(stra, strb, 5);
    Show(stra, strb, strc);
    Swap(stra, strc, 8);
    Show(stra, strb, strc);

    return 0;
}


template <typename T>
void Swap(T &a, T &b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

// overloaded template
// handle array
template <typename T>
void Swap(T a[], T b[], int n)
{
    T tmp;
    for (int i = 0; i < n; i++)
    {
        tmp = a[i];
        a[i] = b[i];
        b[i] = tmp;
    } /* end for (int i = 0; i < n; i++) */
}

template <typename T>
void Show(T &a, T &b)
{
    cout << a << " " << b << endl;
}

template <typename T>
void Show(T a[], T b[], T c[])
{
    cout << a << " " << b << " " << c << endl;
}

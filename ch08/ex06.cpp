/*
 * Date  : 2022-03-16 22:02:31
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T *, int);
template <> const char* maxn(const char**, int);

template <typename T>
void printa(T *, int);
template <> void printa(const char**, int);

int main(int argc, char** argv) {

    int iar[6] = {-1, 5, -7, 10, 12, 8};
    double dar[4] = {-2.3, -5.10, 8.2, 19.0};
    const char *sar[5] = {
        "Hello, world",
        "Bonjour",
        "Ni Hao",
        "Sallute",
        "Konichiha",
    };
    printa(iar, 6);
    cout << "Maximal: " << maxn(iar, 6) << endl;

    printa(dar, 4);
    cout << "Maximal: " << maxn(dar, 4) << endl;

    printa(sar, 5);
    cout << "Longest: " << maxn(sar, 5) << endl;
    
    return 0;
}

template <typename T>
T maxn(T *ar, int n)
{
    T m = ar[0];
    for (int i = 1; i < n; i++)
        m = ar[i] > m ? ar[i] : m;
    return m;
}

template <> const char* maxn(const char** sar, int n)
{
    const char *s = sar[0];
    int l = strlen(s);
    int ln;
    for (int i = 1; i < n; i++)
    {
        ln = strlen(sar[i]);
        if (ln > l)
        {
            l = ln;
            s = sar[i];
        }
    } /* end for (int i = 0; i < n; i++) */
    return s;
}

template <typename T>
void printa(T *ar, int n)
{
    cout << "Array: ";
    for (int i = 0; i < n-1; i++)
        cout << ar[i] << ", ";
    cout << ar[n-1] << endl;
}

template <> void printa(const char **ar, int n)
{
    cout << "Array: ";
    for (int i = 0; i < n-1; i++)
        cout << "\"" << ar[i] << "\", ";
    cout << "\"" << ar[n-1] << "\"" << endl;
}

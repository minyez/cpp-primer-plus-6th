/*
 * Date  : 2022-03-16 21:11:18
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
using namespace std;

const int STRLEN = 80;
void show(char *, int n = 0);
// a global variable to count the number of calls
int ncall = 0;

int main(int argc, char** argv) {

    char s[STRLEN]; 
    cout << "Enter the string you want to show: ";
    cin.getline(s, STRLEN);
    show(s);    // print once
    show(s);    // print once
    show(s, 1); // print 3 times
    show(s);    // print once
    show(s, -1); // print 5 times
    return 0;
}

void show(char *s, int n)
{
    ncall++;
    if (n == 0)
    {
        cout << s << endl;
    }
    else
    {
        for (int i = 0; i < ncall; i++)
        {
            cout << s;
        } /* end for (int i = 0; i < ncall; i++) */
        cout << endl;
    }
}


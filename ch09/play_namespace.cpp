/*
 * Date  : 2022-03-17 17:18:15
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
using namespace std;
namespace myname
{
    double d;
    int i;
    void Show()
    {
        cout << d << " " << i << endl;
    }
    char st[50];
}

// add to global namespace
char i;

int main(int argc, char** argv)
{
    using myname::i;
    i = 8;
    // int i = 7; // fail, already have i in the local namespace
    ::i = 'A'; // this is in the global namespace, a char
    myname::d = 5.0;
    myname::Show();
    cout << i << endl;
    ::cout << ::i << ::endl;
    return 0;
}

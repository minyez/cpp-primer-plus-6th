/*
 * Date  : 2022-03-16 21:34:39
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include<string>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;

void toupper(string &);

int main(int argc, char** argv) {

    string s;
    while ( cout << "Enter a string (q to quit): " && getline(cin, s))
    {
        if (s == "q") break;
        toupper(s);
    }
    cout << "Bye." << endl;

    return 0;
}

void toupper(string &s)
{
    // cannot use const string, why?
    for (auto c : s)
        cout << char(std::toupper(c));
    cout << endl;
}

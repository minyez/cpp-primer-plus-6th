/*
 * Date  : 2022-03-10 12:00:58
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    char ch;
    cout << "Type, and I shall repeat.\n";
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n') cout << ch;
        // else cout << ++ch; // ++ch gives a char
        else cout << ch+1; // ch+1 gives an int
        cin.get(ch);
    }
    cout << endl;

    return 0;
}

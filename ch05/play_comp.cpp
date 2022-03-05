/*
 * Date  : 2022-03-05 16:52:36
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <ios>
#include <iostream>
#include <cstring>
#include <string>

int main(int argc, char** argv) {

    using namespace std;
    // For c-string
    char stra[10] = "make";
    cout.setf(ios_base::boolalpha);
    // false, as comparing the addresses of char array stra and string constant "make"
    cout << (stra == "make") << endl;
    // strcmp returns 0 when the two strings are the same
    cout << strcmp(stra, "make") << endl;

    // For string object
    string strb = "make";
    // true
    cout << (strb == "make") << endl;

    return 0;
}

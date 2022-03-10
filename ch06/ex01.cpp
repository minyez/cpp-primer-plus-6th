/*
 * Date  : 2022-03-10 15:02:35
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <cctype>

using namespace std;
int main(int argc, char** argv) {

    char ch;
    while(cin.get(ch)) {
        if (ch == '@') break;
        // enforce char conversion, otherwise will print integer
        else if (islower(ch)) cout << char(toupper(ch));
        else if (isupper(ch)) cout << char(tolower(ch));
        else if (isalnum(ch)) ;
        else cout << ch;
    }
    cout << endl;

    return 0;
}

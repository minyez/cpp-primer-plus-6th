/*
 * Date  : 2022-03-10 16:50:31
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main(int argc, char** argv) {

    char word[80];
    char ch;
    int nvow = 0, ncon = 0, noth = 0;
    cout << "Enter words (q to quite):" << endl;
    cin >> word;
    while(cin.good() && strcmp(word, "q") != 0) {
        ch = word[0];
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') nvow++;
            else ncon++;
        }
        else noth++;
        cin >> word;
    }
    cout << nvow << " words beginning with vowels" << endl;
    cout << ncon << " words beginning with consonants" << endl;
    cout << noth << " others" << endl;

    return 0;
}

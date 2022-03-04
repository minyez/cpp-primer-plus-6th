/*
 * Date  : 2022-03-03 15:43:07
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char** argv) {
    using namespace std;

    char char1[20];
    char char2[20] = "abcd";
    cout << strlen(char1) << endl;
    cout << strlen(char2) << endl;
    strcpy(char1, char2);
    cout << strlen(char1) << endl;
    //charr[20] = "john";
    //cout << strlen(charr) << endl;

    return 0;
}

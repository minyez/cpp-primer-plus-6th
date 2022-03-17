/*
 * Date  : 2022-03-17 10:54:46
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
using namespace std;
const int ArSize = 10;

int main(int argc, char** argv) {

    char input[ArSize];
    char next;
    while (cout << "Enter a line:\n" && cin.get(input, ArSize))
    {
        cin.get(next);
        while (next != '\n') cin.get(next);
    }
    cout << "Bye.\n";

    return 0;
}

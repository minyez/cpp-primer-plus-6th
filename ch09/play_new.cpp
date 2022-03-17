/*
 * Date  : 2022-03-17 12:08:58
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <new>
using namespace std;

char buffer1[50];

int main(int argc, char** argv) {

    int *p1, *p2; 
    char buffer2[2];
    p1 = new (buffer1) int;
    *p1 = 1;
    cout << *p1 << endl;
    p2 = new (buffer2) int;
    *p2 = 2;
    cout << *p2 << endl;

    return 0;
}

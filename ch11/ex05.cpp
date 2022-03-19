/*
 * Date  : 2022-03-19 22:25:45
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include "stonewt.h"

int main(int argc, char** argv)
{
    using namespace std;
    Stonewt s(5, 12.2);
    cout << "First stone: " << s << endl;
    s = s + 5.5;
    cout << "Adding 5.5 pounts: " << s << endl;
    s = 2 * s;
    cout << "Double: " << s << endl;
    
    Stonewt s2(0, 16.6);
    cout << "A new stone: " << s2 << endl;
    s2.f_stone();
    cout << "In stone: " << s2 << endl;
    cout << "Add this one to the first: " << s + s2 << endl;
    return 0;
}

/*
 * Date  : 2022-03-21 15:55:58
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include "stack.h"
#include <iostream>
using std::cout;
using std::endl;

void check(bool b)
{
    if(b)
        cout << "Success";
    else
        cout << "Fail";
}

int main(int argc, char** argv)
{
    Stack s1, s2(2);
    Item item;
    cout << "Pusing 1 to s1. "; check(s1.push(1)); cout << endl;
    cout << "Pusing 3 to s1. "; check(s1.push(3)); cout << endl;
    cout << "Pusing 5 to s1. "; check(s1.push(5)); cout << endl;
    cout << "Pusing 2 to s2. "; check(s2.push(2)); cout << endl;
    cout << "Pusing 4 to s2. "; check(s2.push(4)); cout << endl;
    cout << "Pusing 6 to s2. "; check(s2.push(6)); cout << endl;
    cout << "Whole s1: " << s1 << endl;
    cout << "Whole s2: " << s2 << endl;
    cout << "Copying s2 to s1" << endl;
    s1 = s2;
    cout << "Poping s1. "; check(s1.pop(item)); cout << " " << item << endl;
    cout << "Poping s1. "; check(s1.pop(item)); cout << " " << item << endl;
    cout << "Poping s1. "; check(s1.pop(item)); cout << " " << item << endl;
    return 0;
}

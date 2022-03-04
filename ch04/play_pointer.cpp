/*
 * Date  : 2022-03-03 17:02:21
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>

int main(int argc, char** argv) {

    using namespace std;
    
    int *ps = new int;
    int *pq = ps;
    *ps = 5;

    // delete pq; // will free the memory space bound to ps and pq
    cout << *ps << endl; // will print a random number, or break

    // dynamic array
    int *psome = new int [10];
    cout << psome[1] << endl; // will print a random number, or break
    delete [] psome;

    // address of an array
    short abc[5];
    cout << abc << endl;  // the address of first element
    cout << &abc << endl; // the address of whole array
    // 两者值相同, 但概念上不同
    cout << abc+1 << endl;  // the address of first element
    cout << (&abc)+1 << endl; // the address of whole array

    short *sp = new short;
    cout << sizeof(*sp) << endl; // size of short: 2
    cout << sizeof(sp) << endl; // size of short pointer: 8

    //short *ap[10] = {}; // ap: array of 10 short pointer 
    short * ap[10] = {}; // ap: array of 10 short pointer 
    ap[1] = new short;
    cout << *ap[1] << endl; // segfault if no new
    
    cout << sizeof(ap) << endl; // size of 10 short pointer: 8*10=80
    short (*pa)[10]; // pa: pointer of a 10-short-long array
    cout << sizeof(pa) << endl; // size of short pointer: 8

    return 0;
}

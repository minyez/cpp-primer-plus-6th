/*
 * Date  : 2022-03-14 13:58:12
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
using namespace std;

// use value as parameter
void addone_v(int);
// use reference as parameter
void addone_r(int&);
void swap_r(int&, int&);
// use pointer as parameter
void addone_p(int*);
void swap_p(int*, int*);

int main(int argc, char** argv) {

    int rats = 5;
    int dogs = 10;
    int & rodents = rats; // must init

    cout << rats++ << " " << rodents; cout << " " << rats << endl; // 5 6 6
    cout << "Address: rats " << &rats << ", rodents " << &rodents << endl;

    // once initialized, one can't point the reference to other int
    // the following not change the reference, but assign the value of dogs to rats
    rodents = dogs;
    cout << rats << " " << rodents << " " << dogs << endl; // 10 10 10
    addone_v(rodents); // will not add, as parse in by value
    cout << rats << " " << rodents << " " << dogs << endl; // 10 10 10
    addone_r(rats);
    // addone_r(rats+1); // usually won't compile, rats+1 is not a reference
    cout << rats << " " << rodents << " " << dogs << endl; // 11 11 10
    addone_p(&rats);
    cout << rats << " " << rodents << " " << dogs << endl; // 12 12 10

    swap_r(rats, dogs);
    cout << rats << " " << rodents << " " << dogs << endl; // 10 10 12
    swap_p(&rats, &dogs);
    cout << rats << " " << rodents << " " << dogs << endl; // 12 12 10
    return 0;
}

void addone_v(int a)
{
    // parse the value
    a += 1;
}

void addone_r(int &r)
{
    // the reference parameter is initialized as the argument
    r += 1;
}

void swap_r(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void addone_p(int *p)
{
    *p += 1;
}

void swap_p(int *a, int *b)
{
    // swap the values at pointers, not swap the pointers
    int tmpp;
    tmpp = *a;
    *a = *b;
    *b = tmpp;
}


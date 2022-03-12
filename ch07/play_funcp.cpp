/*
 * Date  : 2022-03-11 18:21:11
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>

double add(double, double);
double subtract(double, double);
double times(double, double);
double divide(double, double);

int main(int argc, char** argv) {

    using namespace std;
    double a, b, c;
    double (*ari2)(double, double); // a pointer to such functions
    a = 1.0;
    b = 2.0;
    // assigning
    ari2 = add;
    // calling
    cout << (*ari2)(a, b) << endl; // correct in C and C++
    cout << ari2(a, b) << endl; // correct in C++

    // array of function pointers
    // double (*ari2l)(double, double)[4] = {add, subtract, times, divide}; // wrong
    double (*ari2l[4])(double, double) = {add, subtract, times, divide};
    // iterate among ari2l using container with type deduction
    for (auto i : ari2l) {
        cout << &i << ": " << i(a, b) << endl;
    }
    // iterate as ari2l is an array
    for (int i = 0; i < 4; i++) {
        cout << ari2l+i << ": " << (*(ari2l+i))(a, b) << endl;
    }
    // a pointer to function pointer
    auto pari2 = &ari2l[0]; // [] higher than &/*
    for (int i = 0; i < 4; i++) {
        cout << (*(**(pari2++)))(a, b) << endl;
    }
    // a pointer to the array of function pointer
    auto pari2l = &ari2l;
    cout << pari2l << " and " << pari2l+1 << " should differ by " << 4 * sizeof(pari2) << endl;

    // typedef simplification
    typedef double (*td_ari2)(double, double);
    // td_ari2l equivalent to ari2l
    td_ari2 td_ari2l[4] = {add, subtract, times, divide};


    return 0;
}

double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double times(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    return a / b;
}

/*
 * Date  : 2022-03-09 17:36:39
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <array>

const int ArSize = 100;
int main(int argc, char** argv) {

    using namespace std;
    array<long double, ArSize> fact;
    fact[1] = fact[0] = 1.0L;
    for (auto i = 1; i <= ArSize; ++i) {
        fact[i] = i * fact[i-1];
    }
    for (auto i = ArSize - 3; i <= ArSize; ++i) {
        cout << i << "! = " << fact[i] << endl;
    }

    return 0;
}

/*
 * Date  : 2022-03-09 17:49:44
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */

#include <iostream>
int main(int argc, char** argv) {

    using namespace std;
    int year = 0;
    double base = 100.0;
    double fund_da = base, fund_cl = base;
    while (++year) {
        fund_da += 0.1 * base;
        fund_cl += 0.05 * fund_cl;
        if (fund_da < fund_cl) {
            cout << "After Year " << year << ", profit Cleo > Daphne" << endl;
            cout << "    Cleo: " << fund_cl - base << endl;
            cout << "  Daphne: " << fund_da - base << endl;
            break;
        }
    }

    return 0;
}

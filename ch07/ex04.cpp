/*
 * Date  : 2022-03-12 18:51:30
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
long double invprob(unsigned, unsigned);
using namespace std;

const unsigned field_num_1 = 47;
const unsigned choices_1 = 5;
const unsigned field_num_2 = 27;
const unsigned choices_2 = 1;

int main(int argc, char** argv) {
    
    cout << "Your chance of winning the top award with" << endl;
    cout << "  " << choices_1 << " choices from " << field_num_1 << " numbers of field 1," << endl;
    cout << "  " << choices_2 << " choices from " << field_num_2 << " numbers of field 2," << endl;
    cout << "is one in " << invprob(field_num_1, choices_1) * invprob(field_num_2, choices_2) << endl;
    cout << "Bye :)" << endl;
    return 0;
}

long double invprob(unsigned numbers, unsigned picks) {
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p >0; n--, p--) {
        result = result * n / p;
    } /* end for (n = numbers, p = picks; p >0; n--, p--) */
    return result;
}

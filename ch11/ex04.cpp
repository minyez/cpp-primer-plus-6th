/*
 * Date  : 2022-03-19 21:30:19
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include "mytime.h"

int main(int argc, char** argv)
{
    using std::cout;
    using std::endl;
    Time aida(3, 35), tosca(2, 48), temp;

    cout << "Aida and Tosca:" << endl;
    cout << aida << ": " << tosca << endl;
    temp = aida + tosca;
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida * 1.17;
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
    return 0;
}

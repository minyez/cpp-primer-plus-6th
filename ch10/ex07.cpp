/*
 * Date  : 2022-03-18 22:54:29
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include "plorg.h"

int main(int argc, char** argv)
{
    using namespace std;
    Plorg p1, p2("Plorga 2", 70);
    cout << "The default one: ";
    p1.report();
    cout << "Another: ";
    p2.report();
    cout << "Reset the CI of the default to 80" << endl;
    p1.setCI(80);
    cout << "Now we have ";
    p1.report();
    return 0;
}

/*
 * Date  : 2022-03-21 11:05:08
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include "cow.h"

int main(int argc, char** argv)
{
    using namespace std;
    {
        Cow c1;
        Cow c2 = Cow("Mike", "Drink", 120.0);
        Cow c3("Bill", "Grass", 110.0);
        cout << "Cows" << endl;
        cout << "  c1: "; c1.ShowCow();
        cout << "  c2: "; c2.ShowCow();
        cout << "  c3: "; c3.ShowCow();
        cout << endl;
        c1 = c3;
        cout << "Copy c3 to c1, now c1: "; c1.ShowCow();
    }
    cout << "Exiting main" << endl;
    return 0;
}

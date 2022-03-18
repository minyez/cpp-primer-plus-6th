/*
 * Date  : 2022-03-18 20:20:30
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include "person.h"

int main(int argc, char** argv)
{
    using std::cout, std::endl;
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    Person *ps[3] = {&one, &two, &three};
    for (auto i : ps) {
        i->Show();
        cout << endl;
        i->FormalShow();
    }
    return 0;
}

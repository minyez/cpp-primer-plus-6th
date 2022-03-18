/*
 * Date  : 2022-03-18 22:38:31
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include "move.h"

int main(int argc, char** argv)
{
    using namespace std;
    Move m1, m2(5, 6), m3(-2, 8);
    m1.showmove();
    m2.showmove();
    m3.showmove();
    cout << "Adding all together" << endl;
    Move m4 = m1.add(m2).add(m3);
    m4.showmove();
    cout << "Resetting the new move to (2,2)" << endl;
    m4.reset(2, 2);
    m4.showmove();
    return 0;
}

/*
 * Date  : 2022-03-17 20:02:47
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include"golf.h"

const int NGMAX = 5;

int main(int argc, char** argv) {

    using namespace std;

    Golf g[NGMAX];
    int count, retc;
    for (count = 0; count < NGMAX; count++) 
    {
        retc = g[count].setgolf();
        if (!retc) break;
    } /* end for (int i = 0; i < NGMAX; i++) */

    for (int i = 0; i < count; i++)
    {
        g[i].showgolf();
    } /* end for (int i = 0; i < count; i++) */

    return 0;
}

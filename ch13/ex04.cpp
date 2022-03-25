/*
 * Date  : 2022-03-25 16:07:03
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include "port.h"
using namespace std;

int main(int argc, char** argv)
{
    Port egt("Hongxing", "liquor", 1);
    VintagePort cc("Changcheng", 5, "C.C.", 1990);
    Port *pp = &egt;
    VintagePort *pvp = &cc;

    pp->Show();
    // egt ++;
    egt += 1;
    cout << *pp << endl;

    pp = &cc;
    cout << " cout *pp: " << *pp << endl;
    cout << "cout *pvp: " << *pvp << endl;

    VintagePort cc2;
    cc2 = cc;
    *pp -= 2;
    cc.Show();
    cc2.Show();
    
    return 0;
}

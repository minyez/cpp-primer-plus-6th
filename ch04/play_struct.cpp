/*
 * Date  : 2022-03-03 16:03:22
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <string>
#include <cstring>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(int argc, char** argv) {

    using namespace std;
    
    inflatable empty;
    inflatable apple = {"apple", 20.0, 1.0};
    cout << empty.name << empty.volume << empty.price << endl;
    cout << apple.name << apple.volume << apple.price << endl;

    // a pointer to address with sufficient memory to define a inflatable
    inflatable * ip = new inflatable;
    ip->volume = 10.0;
    ip->price = 20.0;
    strcpy(ip->name, "blueberry");
    // (*ip). == ip->, parentheses required
    cout << ip->name << (*ip).volume << ip->price << endl;

    return 0;
}

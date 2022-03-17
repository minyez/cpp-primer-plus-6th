/*
 * Date  : 2022-03-17 20:33:28
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <cstring>
#include <new>

struct chaff
{
    char dross[20];
    int slag;
};

void show(chaff &);

int main(int argc, char** argv)
{
    using namespace std;
    chaff *pc;
    char *buffer;
    buffer = new char [sizeof(chaff)*2];
    // cout << sizeof(chaff) << endl << sizeof(char) << endl;
    pc = new (buffer) chaff[2];

    strcpy(pc->dross, "slight");
    pc->slag = 3;
    strcpy((pc+1)->dross, "severe");
    (pc+1)->slag = 1;
    for (int i = 0; i < 2; i++)
    {
        show(*(pc+i));
    } /* end for (int i = 0; i < 2; i++) */
    delete [] pc;
    // delete [] buffer; // will double free, core dump
    return 0;
}

void show(chaff &c)
{
    using std::cout;
    using std::endl;
    cout << "Chaff dross = \"" << c.dross << "\", slag = " << c.slag << endl;
}

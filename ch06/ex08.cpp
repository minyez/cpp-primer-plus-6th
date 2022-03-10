/*
 * Date  : 2022-03-10 16:57:38
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {

    char filename[80];
    char tmp;
    int count = 0;
    cout << "Enter the name of file to read: ";
    cin.getline(filename, 80);
    ifstream fin;
    fin.open(filename);
    if (!fin.is_open()) exit(EXIT_FAILURE);
    fin.get(tmp);
    while(fin.good() && ++count) fin.get(tmp);
    cout << "Characters in the file: " << count << endl;

    return 0;
}

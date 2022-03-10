/*
 * Date  : 2022-03-10 14:30:53
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <cstdlib>
#include <iostream>
#include <fstream>

int main(int argc, char** argv) {

    using namespace std;
    char filename[50];
    char contentline[80];
    ofstream fout;
    cin >> filename;
    fout.open(filename);
    fout << "filename: " << filename << endl;
    fout << "Hello world!" << endl;
    fout.close();

    ifstream fin;
    fin.open(filename);
    // the file always exists in this case, but may be otherwise.
    // so add error handling
    if (!fin.is_open()) exit(EXIT_FAILURE);
    fin >> filename; // remove "filename:"
    // method 1 : no extra space at the head of filename
    fin >> filename;
    fin.get(); // get rid of \n
    // // method 2: one extra space, from the trailing space of fout << "filename: "
    // fin.getline(filename, 50);
    cout << "Read filename: " << filename << endl;
    cout << "Content:" << endl;
    while (fin.getline(contentline, 80)) {
        cout << contentline << endl;
    }
    fin.close();

    return 0;
}

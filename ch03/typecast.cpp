#include <iostream>

int main() {
    using namespace std;
    int auks, bats, coots;

    auks = 19.99 + 11.99; // add first

    bats = (int) 19.99 + (int) 11.99;
    coots = int (19.99) + int (11.99);
    cout << "auks = " << auks << ", bats = " << bats << ", coots = " << coots << endl;
    
    char ch = 'Z';
    cout << "The code for " << ch << " is " << int(ch) << endl;
    return 0;
}
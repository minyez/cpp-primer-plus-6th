#include<iostream>
using namespace std;

int main(int argc, char** argv) {

    long long usa;
    long long earth;
    cout << "Enter the world's population: ";
    cin >> earth;
    cout << "Enter the US's population: ";
    cin >> usa;
    cout << "population of the US is " << double(usa)/earth*100 << "% of the world population" << endl;

    return 0;

}
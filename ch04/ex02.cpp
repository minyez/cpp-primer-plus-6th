/*
 * Date  : 2022-03-04 17:27:47
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <string>

int main(int argc, char** argv) {

    using namespace std;
    // compare to the char implementation,
    // we do not have to specify length of string when declared
    string name;
    string dessert;
    cout << "Enter your name:" << endl;
    getline(cin, name);
    cout << "Enter your favorite dessert:" << endl;
    getline(cin, dessert);
    cout << "I have some delicious " << dessert << " for you, " << name << "." << endl;

    return 0;
}

/*
 * Date  : 2022-03-04 17:38:55
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */

#include <iostream>
#include <string>

int main(int argc, char** argv) {

    using namespace std;
    
    string temp, full_name;
    cout << "Enter your first name: ";
    getline(cin, full_name);
    cout << "Enter your last name: ";
    getline(cin, temp);
    full_name = temp + ", " + full_name;
    cout << "Here's the information in a single string: " << full_name << endl;

    return 0;
}

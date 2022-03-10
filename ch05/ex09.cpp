/*
 * Date  : 2022-03-10 11:13:33
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {

    string input;
    int count = 0;
    cin >> input;
    while (input != "done") {
        count += 1;
        cin >> input;
    }

    cout << "You entered a total of " << count << " words." << endl;

    return 0;
}

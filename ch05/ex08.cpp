/*
 * Date  : 2022-03-10 11:05:19
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char** argv) {

    char input[80]; // allow long word
    int count = 0;

    cin >> input;
    while (strcmp(input, "done") != 0) {
        count += 1;
        cin >> input;
    }
    cout << "You entered a total of " << count << " words." << endl;

    return 0;
}

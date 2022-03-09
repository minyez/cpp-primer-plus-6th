/*
 * Date  : 2022-03-09 17:44:41
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>

int main(int argc, char** argv) {

    using namespace std;
    int i;
    int sum = 0;
    cin >> i;
    while (i != 0) {
        sum += i;
        cout << "Sum till now: " << sum << endl;
        cin >> i;
    }

    return 0;
}

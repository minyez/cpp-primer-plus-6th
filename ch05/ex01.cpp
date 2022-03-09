/*
 * Date  : 2022-03-09 17:32:47
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>

int main(int argc, char** argv) {

    using namespace std;
    int st, ed;
    int sum = 0;
    cout << "Enter starting and ending integers: ";
    cin >> st;
    cin >> ed;
    for (auto i = st; i <= ed; ++i) {
        cout << i << " ";
        sum += i;
    };
    cout << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}

/*
 * Date  : 2022-03-04 18:07:13
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */

#include <iostream>
#include <array>

int main(int argc, char** argv) {

    using namespace std;
    array<float, 3> grades;
    float sum = 0.0;

    for (auto i = 0; i < 3; i++) {
        cout << "Enter grade of running, # " << i+1 << ": ";
        cin >> grades.at(i);
        sum += grades[i];
    }

    cout << "Times of running: " << grades.size() << endl;
    cout << "Average grade: " << sum/3.0 << endl;

    return 0;
}

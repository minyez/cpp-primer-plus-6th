/*
 * Date  : 2022-03-10 15:10:04
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
const int Max = 10;

int main(int argc, char** argv) {

    using namespace std;
    double arr[Max] = {};
    int count = 0;
    double sum = 0.0;
    for (count = 0; count < Max; sum += arr[count++])
    {
        cout << "Enter #" << count+1 << " donation: ";
        cin >> arr[count];
        if (!cin.good()) break;
    }
    cin.clear();
    if (count == 0) cout << "No data input" << endl;
    else
    {
        double avg = sum / double(count);
        cout << count << " donations, average: " << avg << endl;
        int bigger_than_avg = 0;
        for (int i = 0; i < count; i++)
        {
            if (arr[i] > avg) bigger_than_avg += 1;
        } /* end for (int i = 0; i < count; i++) */
        cout << "# Donations > average: " << bigger_than_avg << endl;
    }

    return 0;
}

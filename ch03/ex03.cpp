#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    const double min_to_deg = 1.0 / 60.0;
    const double sec_to_min = min_to_deg;
    int deg;
    int min;
    int sec;
    cout << "Enter a latitude in degress, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> deg;
    cout << "Next, enter the minutes: ";
    cin >> min;
    cout << "First, enter the seconds: ";
    cin >> sec;
    cout << deg << " degress, " << min << " minutes, " << sec << " seconds = "
         << (sec * sec_to_min + min) * min_to_deg + deg << " degrees" << endl;

    return 0;

}

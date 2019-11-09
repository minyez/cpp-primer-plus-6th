#include<iostream>
using namespace std;

int main(int argc, char** argv) {

    long long sec;
    long long d;
    long sec2;
    int h;
    int m;
    int s;
    const int h_per_d = 24;
    const int m_per_h = 60;
    const int s_per_m = 60;
    cout << "Enter seconds: ";
    cin >> sec;
    d = sec / (h_per_d*m_per_h*s_per_m);
    sec2 = sec % (h_per_d*m_per_h*s_per_m);
    h = sec2 / (m_per_h*s_per_m);
    sec2 = sec2 % (m_per_h*s_per_m);
    m = sec2 / s_per_m;
    sec2 = sec2 % s_per_m;
    cout << sec << " seconds = " << d << " days, " << h << " hours,"
         << m << " minutes, " << sec2 << " seconds." << endl;

    return 0;

}
#include<iostream>
using namespace std;

int main(int argc, char** argv) {

    int year;
    char address[80];
    cout << "Year:";
    (cin >> year).get();
    // cin保留换行符, 用get拼接, 等价于
    /* cin >> year;
    cin.get(); */
    cout << "Address?";
    // cin >> address;
    cin.getline(address, 80);

    return 0;

}
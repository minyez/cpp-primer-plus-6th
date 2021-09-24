#include <iostream>

int main() {
    using namespace std;
    int nights = 1001;
    int *pt = new int; // pt is a pointer to int
    *pt = 1001;

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int value = " << *pt << ": location = " << pt << endl;

    double* pd = new double;
    *pd =  100.0;

    cout << "double value = " << *pd << ":location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;

    cout << endl;
    cout << "size of pt = " << sizeof(pt) << ":size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd) << ":size of *pd = " << sizeof(*pd) << endl;

    return 0;
}

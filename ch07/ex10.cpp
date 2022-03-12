/*
 * Date  : 2022-03-12 20:58:34
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
using namespace std;

typedef double dfunc(double, double);
double calculate(double, double, dfunc *);
double add(double, double);
double subtract(double, double);
double times(double, double);

const int nari = 3;
const char *ariname[nari] = {"add", "subtract", "times"};
dfunc *arifunc[nari] = {add, subtract, times};

int main(int argc, char** argv)
{
    double a, b;
    while (cout << "Enter two numbers: " && cin >> a >> b) {
        for (int i = 0; i < nari; i++)
        {
            cout << "  Result of " << ariname[i] << " " << a << " and " << b << ": "
                 << calculate(a, b, arifunc[i]) << endl;
        } /* end for (int i = 0; i < ; i++) */
        while (cin.get() != '\n') continue;
    }
    cout << "Bye :)" << endl;
    return 0;
}

double calculate(double a, double b, dfunc *pd)
{
    return (*pd)(a, b);
}

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double times(double a, double b)
{
    return a * b;
}

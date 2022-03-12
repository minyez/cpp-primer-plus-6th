/*
 * Date  : 2022-03-12 19:27:42
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
using namespace std;
const int Max = 5;

double * fill_array(double *, int);
void show_array(const double *, const double *);
void revalue(double, double *, double *);

int main(int argc, char** argv) {

    double prop[Max];

    double * pend = fill_array(prop, Max);
    show_array(prop, pend);
    if (pend != prop) {
        cout << "Enter revaluetion factor: ";
        double factor;
        while (!(cin >> factor)) // bad input
        {
            cin.clear();
            while (cin.get() != '\n') continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, prop, pend);
        show_array(prop, pend);
    }
    cout << "Done.\n";

    return 0;
}
double * fill_array(double * ar, int limit)
{
    double tmp;
    double *pend = ar;
    int i = 0;
    while (pend != (ar+limit))
    {
        cout << "Enter value #" << ++i << ": ";
        cin >> tmp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n') continue;
            cout << "Bad input; terminated" << endl;
            break;
        }
        else if (tmp < 0) break;
        *(pend++) = tmp;
    } /* end for (i = 0; i < limit; i++) */
    return pend;
}

void show_array(const double *st, const double *ed)
{
    const double *p = st;
    int i = 0;
    while(p != ed)
        cout << "Property #" << ++i << ": $" << *(p++) << endl;
}

void revalue(double r, double *st, double *ed)
{
    double *p = st;
    while (p!=ed)
    {
        *(p++) *= r;
    }
}

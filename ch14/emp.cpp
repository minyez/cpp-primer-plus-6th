#include "emp.h"
#include <iostream>
#include <ostream>
using std::ostream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

// abstr_emp
abstr_emp::~abstr_emp() {}
void abstr_emp::Data() const
{
    cout << lname << ", " << fname << " (job " << job << ")" << endl;
}

void abstr_emp::Get()
{
    cout << "Enter fisrt name: ";
    getline(cin, fname);
    cout << "Enter last name: ";
    getline(cin, lname);
    cout << "Enter job: ";
    getline(cin, job);
}

ostream & operator<<(ostream &os, const abstr_emp &e)
{
    os << e.lname << ", " << e.fname;
    return os;
}

// manager
void manager::Get()
{
    cout << "Enter charge number: ";
    cin >> inchargeof;
    while (cin.get() != '\n') continue;
}
void manager::Data() const
{
    cout << "charge number: " << inchargeof << endl;
}

// fink
void fink::Get()
{
    cout << "Enter fink reports to: ";
    getline(cin, reportsto);
}
void fink::Data() const
{
    cout << "Reports to " << reportsto << endl;
}


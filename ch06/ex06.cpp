/*
 * Date  : 2022-03-10 16:24:38
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <string>
using namespace std;
struct patron {
    string name;
    double donation;
};
const double donation_grand = 10000;

void display_patron(patron p) {
    cout << "  " << p.name << " (" << p.donation << ")" << endl;
}

int main(int argc, char** argv) {

    int npa;
    int ngpa = 0; // grand patron
    double donation;
    cout << "Enter the number of patrons: ";
    cin >> npa;
    patron *patrons = new patron[npa];
    for (int i = 0; i < npa; i++) {
        cout << "Enter patron #" << i+1 << " name: ";
        cin >> patrons[i].name;
        cout << "Enter patron #" << i+1 << " donation: ";
        cin >> donation;
        if (donation > donation_grand) ngpa++;
        patrons[i].donation = donation;

    } /* end for (int i = 0; i < npa; i++) */
    cout << "Grand Patrons" << endl;
    if (ngpa) {
        for (int i = 0; i < npa; i++) {
            if (patrons[i].donation > donation_grand)
                display_patron(patrons[i]);
        } /* end for (int i = 0; i < npa; i++) */
    } else {
        cout << "  none" << endl;
    }
    cout << "Patrons" << endl;
    if (npa-ngpa) {
        for (int i = 0; i < npa; i++) {
            if (patrons[i].donation <= donation_grand)
                display_patron(patrons[i]);
        } /* end for (int i = 0; i < npa; i++) */
    } else {
        cout << "  none" << endl;
    }

    return 0;
}

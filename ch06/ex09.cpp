/*
 * Date  : 2022-03-10 16:24:38
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <string>
#include <fstream>
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

    char filename[80];
    int npa;
    int ngpa = 0; // grand patron
    double donation;

    cout << "Enter the name of data file: ";
    cin.getline(filename, 80);
    ifstream fin;
    fin.open(filename);
    if (!fin.is_open()) exit(EXIT_FAILURE);
    fin >> npa;
    if (!fin.good()) exit(EXIT_FAILURE);
    fin.get();

    patron *patrons = new patron[npa];
    for (int i = 0; i < npa; i++) {
        // cout << "Reading patron #" << i+1 << endl;
        getline(fin, patrons[i].name);
        if (!fin.good()) exit(EXIT_FAILURE);
        fin >> donation;
        if (!fin.good()) exit(EXIT_FAILURE);
        fin.get();
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

/*
 * Date  : 2022-03-10 15:45:51
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <string>
using namespace std;
const int nbop = 5;
const int strsize = 40;

// BOP
struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

char get_valid_char() {
    char c;
    cin.get(c);
    // early return
    if ('\n' == c) return c;
    // skip the left
    while(cin.get() != '\n');
    return c;
}

int main(int argc, char** argv) {

    bop bops[nbop] = {
        {"Wimp Macho", "", "", 0},
        {"Raki Rhodes", "Junior Programmer", "", 1},
        {"Celia Laiter", "", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "", 1},
        {"Pat Hand", "", "LOOPY", 2},
    };
    char opt = '\0';
    cout << "Benevolent Order of Programmers Report\n"
            "a. display by name     b. display by title\n"
            "c. display by bopname  d. display by preference\n"
            "q. quite\n";
    while ( opt != 'q' ) {
        switch (opt) {
            case 'a' :
                for (int i = 0; i < nbop; i++) {
                cout << bops[i].fullname << endl;
                }; /* end for (int i = 0; i < nbop; i++) */
                break;
            case 'b' :
                for (int i = 0; i < nbop; i++) {
                    cout << bops[i].title << endl;
                }; /* end for (int i = 0; i < nbop; i++) */
                break;
            case 'c' :
                for (int i = 0; i < nbop; i++) {
                    cout << bops[i].bopname << endl;
                }; /* end for (int i = 0; i < nbop; i++) */
                break;
            case 'd' :
                for (int i = 0; i < nbop; i++) {
                    switch(bops[i].preference) {
                        case 0: cout << bops[i].fullname << endl; break;
                        case 1: cout << bops[i].title << endl; break;
                        case 2: cout << bops[i].bopname << endl; break;
                    }
                }; /* end for (int i = 0; i < nbop; i++) */
                break;
        }
        cout << "Enter your choice: "; opt = get_valid_char();
    }
    cout << "Bye!" << endl;
    

    return 0;
}

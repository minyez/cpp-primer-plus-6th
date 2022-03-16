/*
 * Date  : 2022-03-16 21:45:37
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
using namespace std;
#include <cstring>
struct stringy
{
    char * str;
    int ct; // length of string (not counting '\0')
};

// prototypes for set(), show(), and show() go here
void set(stringy &, char *);
void show(const stringy &, const int n = 1);
void show(const char *, const int n = 1);

int main(int argc, char** argv) {

    stringy beany;
    char testing[] = "Reality isn't what is used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done");

    return 0;
}

void set(stringy & stg, char *s)
{
    stg.ct = strlen(s);
    stg.str = new char [stg.ct+1];
    strcpy(stg.str, s);
}

void show(const stringy & stg, const int n)
{
    for (int i = 0; i < n; i++)
        cout << stg.str;
    cout << endl;
}

void show(const char * s, const int n)
{
    for (int i = 0; i < n; i++)
        cout << s;
    cout << endl;
}


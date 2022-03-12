/*
 * Date  : 2022-03-12 20:03:49
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <cstring>
using namespace std;
const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display(const char *fullname, const char *hobby, const int ooplevel);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n') continue;
    student * ptr_stu = new student [class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    } /* end for (int i = 0; i < entered; i++) */
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

void remove_leading_space()
{
    char ch;
    ch = cin.get();
    while (ch == ' ') ch = cin.get(); // remove leading space
    cin.putback(ch);
}

int getinfo(student pa[], int n)
{
    int i;
    char fullname[SLEN];
    for (i = 0; i < n; i++)
    {
        cout << "Enter information of student " << i+1 << ":" << endl;
        cout << "  Name: ";
        remove_leading_space();
        cin.getline(pa[i].fullname, SLEN);
        if (strcmp(pa[i].fullname, "") == 0) break; // blank line
        cout << "  Hobby: ";
        remove_leading_space();
        cin.getline(pa[i].hobby, SLEN);
        if (strcmp(pa[i].hobby, "") == 0) break; // blank line
        cout << "  OOP level (int): ";
        while (!(cin >> pa[i].ooplevel))
        {
            cin.clear();
            while (cin.get() != '\n') continue;
            cout << "  Invalid, re-enter: ";
        }
        while (cin.get() != '\n') continue; // clean up trailing characters
    } /* end for (int i = 0; i < n; i++) */
    return i;
}

void display(const char *prefix, const char *fullname, const char *hobby, const int ooplevel)
{
    cout << prefix
         << "Student name: " << fullname
         << ", hobby: " << hobby
         << ", OOP level: "  << ooplevel << endl;
}

void display1(student st)
{
    display("(d1) ", st.fullname, st.hobby, st.ooplevel);
}

void display2(const student *ps)
{
    display("(d2) ", ps->fullname, ps->hobby, ps->ooplevel);
}

void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        display("(d3) ", (pa+i)->fullname, (pa+i)->hobby, (pa+i)->ooplevel);
    } /* end for (int i = 0; i < n; i++) */
}

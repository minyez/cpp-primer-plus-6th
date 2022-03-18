/*
 * Date  : 2022-03-18 23:25:14
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <cctype>
#include "list.h"

int main(int argc, char** argv)
{
    using namespace std;
    List list;
    char ch;
    const char *msg = "Options:"
        "  a) add  q) quit"
        "  u) upshift  d) downshift"
        "  l) move left  r) move right\n"
        "Your option: ";
    while (cout << msg && cin >> ch)
    {
        if(ch == 'q' || ch == 'Q') break;
        while (std::cin.get() != '\n') continue;
        if(isalpha(ch)) ch = tolower(ch);
        switch (ch)
        {
            case 'a':
                list.add();
                list.show();
                break;
            case 'u':
                list.visit(up);
                list.show();
                break;
            case 'd':
                list.visit(down);
                list.show();
                break;
            case 'l':
                list.visit(left);
                list.show();
                break;
            case 'r':
                list.visit(right);
                list.show();
                break;
        }
    }
    cout << "Bye." << endl;
    return 0;
}

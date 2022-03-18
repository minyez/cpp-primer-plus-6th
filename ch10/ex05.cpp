/*
 * Date  : 2022-03-18 21:40:05
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include "stack.h"

int main(int argc, char** argv)
{
    using std::cin, std::cout, std::endl;
    char ch;

    Stack s;
    while (cout << "Choose your action a) push b) pop q) quit: " && cin >> ch)
    {
        customer c;
        while (cin.get() != '\n') continue;
        if (ch == 'q' || ch == 'Q') break;
        switch (ch) {
            case 'a':
            case 'A':
                cout << "Enter the fullname: ";
                cin.getline(c.fullname, 35);
                cout << "Enter the payment: ";
                cin >> c.payment;
                while (cin.get() != '\n') continue;
                if(!s.push(c)) cout << "Reach maximal customers" << endl;
                break;
            case 'b':
            case 'B':
                if(!s.pop(c)) cout << "No customer in the stack" << endl;
                break;
            default:
                cout << "Unknown action" << endl;
        }
    }
    cout << "Bye." << endl;
    return 0;
}

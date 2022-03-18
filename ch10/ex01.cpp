/*
 * Date  : 2022-03-18 19:27:13
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include "bank.h"

bool parse_string(std::string &, const std::string &);

int main(int argc, char** argv)
{
    using std::cin, std::cout, std::endl;
    std::string fn, acc;
    double b, am;
    char ch;
    cout << "Creating your account..." << endl;
    if (!parse_string(acc, "account"))
    {
        cout << "Exit." << endl;
        return EXIT_FAILURE;
    }
    if (!parse_string(fn, "full name"))
    {
        cout << "Exit." << endl;
        return EXIT_FAILURE;
    }
    cout << "  Enter your balance: ";
    cin >> b;
    BankAccount ba(fn, acc, b);
    cout << "Done with creation." << endl;
    ba.show();
    while (cout << "Choose your action:\n  a) deposit  b) withdraw q) quit\n"
            && cin >> ch)
    {
        while (cin.get() != '\n') continue;
        if (ch == 'q' || ch == 'Q') break;
        switch (ch) {
            case 'a':
            case 'A':
                cout << "Enter the amount to deposit: ";
                cin >> am;
                ba.deposit(am);
                ba.show();
                while (cin.get() != '\n') continue;
                break;
            case 'b':
            case 'B':
                cout << "Enter the amount to withdraw: ";
                cin >> am;
                ba.withdraw(am);
                ba.show();
                while (cin.get() != '\n') continue;
                break;
            default:
                cout << "Unknown action" << endl;
        }
    }
    cout << "Bye." << endl;
    return 0;
}

bool parse_string(std::string &s, const std::string &msg)
{
    using std::cin, std::cout, std::endl;
    cout << "  Enter your " << msg << ": ";
    getline(cin, s);
    if (s == "")
    {
        cout << "Empty " << msg << endl;
        return false;
    }
    return true;
}

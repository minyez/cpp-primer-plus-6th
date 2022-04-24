#include <string>
#include <iostream>
#include <cctype>
using namespace std;

bool is_palindrome(string s)
{
    string st;
    for (auto c: s)
        if (isalpha(c))
            st += tolower(c);
    // cout << st << " " << string(st.rbegin(), st.rend()) << endl;
    if (st == string(st.rbegin(), st.rend())) return true;
    return false;
}

int main(int argc, char** argv)
{
    string s;
    cout << "Enter a string (emtpy to abort): ";
    getline(cin, s);
    while ( s != "" )
    {
        if(is_palindrome(s))
            cout << s << " is palidrome." << endl;
        else
            cout << s << " is not palidrome." << endl;
        cout << "Enter a string (emtpy to abort): ";
        getline(cin, s);
    }

    return 0;
}

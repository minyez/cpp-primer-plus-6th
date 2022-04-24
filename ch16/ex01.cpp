#include <string>
#include <iostream>
using namespace std;

bool is_palindrome(string s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        // cout << "Comparing " << s[i] << " and " << s[j] << endl;
        if (s[i++] != s[j--]) return false;
    }
    return true;
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

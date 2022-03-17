/*
 * Date  : 2022-03-17 20:21:22
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include<string>
void strcount(const std::string);

int main(int argc, char** argv)
{
    using namespace std;
    string input;
    cout << "Enter a line (emtpy to quit):" << endl;
    getline(cin, input);
    while ( input != "" )
    {
        strcount(input);
        cout << "Enter next line (emtpy to quit):" << endl;
        getline(cin, input);
    }
    cout << "Bye." << endl;
    return 0;
}

void strcount(const std::string s)
{
    using std::cout;
    using std::endl;
    static int total = 0;
    int count = s.length();
    total += count;
    
    cout << "\"" << s << "\" contains ";
    cout << count << " characters" << endl;
    cout << total << " characters total" << endl;
}

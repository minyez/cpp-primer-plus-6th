#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main(int argc, char** argv)
{
    const char cstr[] = "Learning C++ primer plus";
    cout << "String initialization" << endl;
    string s1("Hello, World!");
    string s2(15, '=');
    string s3(cstr+9, cstr+12); // use template <Iter> (Iter begin, Iter end)
    string s4(s1, 7, 5);
    string s5(s1, 7);
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    cout << endl;
    cout << "String find" << endl;
    string s = "times new roman";
    cout << s.find("e") << endl;
    cout << s.find("e", s.find("e") + 1) << endl;
    assert(s.find("z") == s.npos);
    cout << s.find("z") << " ?= " << s.npos << endl;

    return 0;
}

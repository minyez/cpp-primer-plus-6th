#include <algorithm>
#include <memory>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

unique_ptr<int> make_int(int n)
{
    return unique_ptr<int>(new int(n));
}

void show(unique_ptr<int> &vp) // must be reference
{
    cout << *vp << endl;
}

unique_ptr<string> demo(const char *s)
{
    unique_ptr<string> temp(new string(s));
    return temp;
}

int main(int argc, char** argv)
{
    srand(time(0));
    int size = 5;
    vector<unique_ptr<int>> vp(size);
    for (auto &i: vp)
        i = make_int(rand() % 100);
    vp.push_back(make_int(rand() % 100));
    for_each(vp.begin(), vp.end(), show);

    unique_ptr<int> pi1 = unique_ptr<int> (new int(5));
    // unique_ptr<int> ps2 = ps1; // invalid

    unique_ptr<string> ps1, ps2(new string("New"));
    // ps1 = ps2; // invalid, compile error
    ps1 = move(ps2);
    // ps1 = demo("Old"); // run, but seg fault
    ps2 = demo("Old");
    cout << *pi1 << " " << *ps2 << endl;

    return 0;
}

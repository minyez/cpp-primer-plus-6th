#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    vector<double> scores = {1, 2, 3, 4, 5};
    vector<double>::iterator di;
    di = scores.begin();
    while ( di != scores.end() )
    {
        cout << *di;
        di++;
    }
    cout << endl;
    di = scores.begin();

    // use iterator to initialize
    vector<double> scores2(++di, scores.end());
    for (auto i: scores2)
        cout << i;
    cout << endl;
    return 0;
}

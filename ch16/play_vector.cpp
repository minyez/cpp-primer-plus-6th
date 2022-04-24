#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
void show_vector(vector<T> v)
{
    for (auto i: v)
        cout << i << " ";
    cout << endl;
}

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

    // use iterator to initialize
    auto di2 = scores.begin();
    vector<double> scores2(++di2, scores.end());
    di2 = scores2.begin();
    *di2 -= 1;

    scores2.push_back(scores2[scores2.size()-1]+1);
    for (di2 = scores2.begin(); di2 != scores2.end() ; di2++)
        (*di2)++;
    show_vector(scores2);

    // remove the first two elements
    scores2.erase(scores2.begin(), scores2.begin()+2);
    show_vector(scores2);
    scores2.insert(scores2.end() - 1, -1);
    show_vector(scores2);
    scores2.insert(scores2.end() - 1, scores.begin() + 1, scores.end());
    show_vector(scores2);

    // container functions, in algorithm
    random_shuffle(scores2.begin(), scores2.end());
    show_vector(scores2);
    sort(scores2.begin(), scores2.end());
    show_vector(scores2);
    // reference to modify the contents in container
    for (auto &i: scores2)
        i++;
    show_vector(scores2);

    return 0;
}

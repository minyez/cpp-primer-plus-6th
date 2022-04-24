#include <iostream>
#include <map>
#include <ostream>
#include <set>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    const int N = 6;
    ostream_iterator<string, char> out(cout, " ");
    // set, keys are unique
    string s1[N] = {"buffoon", "thinkers", "for", "heavy", "can", "for"};
    set<string> A(s1, s1+3);   // initialize with range
    set<string> B(s1+3, s1+N); // initialize with range
    cout << "A: ";
    copy(A.begin(), A.end(), out);
    cout << endl;
    cout << "B (note key order): ";
    copy(B.begin(), B.end(), out);
    cout << endl;
    // set_union in algorithm
    cout << "AUB: ";
    set_union(A.begin(), A.end(), B.begin(), B.end(), out);
    cout << endl;
    set<string> C; // empty
    set_union(A.begin(), A.end(), B.begin(), B.end(),
              insert_iterator<set<string>>(C, C.begin()));
    cout << "C = AUB: ";
    copy(C.begin(), C.end(), out);
    cout << endl;

    cout << "A^B: ";
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
    cout << endl;
    cout << "Difference = A^(Bc): ";
    set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
    cout << endl;
    cout << "Difference = B^(Ac): ";
    set_difference(B.begin(), B.end(), A.begin(), A.end(), out);
    cout << endl;
    
    copy(C.lower_bound("can"), C.upper_bound("thinkers"), out);
    cout << endl;
    return 0;
}

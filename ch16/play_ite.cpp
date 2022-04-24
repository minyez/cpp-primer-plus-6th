#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char** argv)
{
    int casts[10] = {6, 7, 2, 9, 4, 11, 8, 7, 10, 5};
    vector<int> dice(10);

    copy(casts, casts+10, dice.begin());
    cout << "Let the dice be cast!\n";
    ostream_iterator<int, char> out_iter(cout, " ");
    copy(dice.begin(), dice.end(), out_iter);
    cout << "(stop)" << endl;
    cout << "Roll twice!\n";
    // copy 返回类型和第三个参数 迭代器类型相同
    copy(dice.begin(), dice.end(),
         copy(dice.begin(), dice.end(), out_iter));
    cout << "(stop)" << endl;
    cout << "Implicit use of reverse iterator.\n";
    copy(dice.rbegin(), dice.rend(), out_iter);
    cout << "(stop)" << endl;
    cout << "Explicit use of reverse iterator.\n";
    vector<int>::reverse_iterator ri;
    for (ri = dice.rbegin(); ri != dice.rend(); ++ri)
        cout << *ri << ' ';
    cout << "(stop)" << endl;

    cout << "Clear dice, push single 0" << endl;
    dice.clear();
    dice.push_back(0);
    copy(dice.begin(), dice.end(), out_iter);
    cout << "(stop)" << endl;

    int casts2[5] = {-2, -3, -4, -7, -10};
    int casts3[5] = {0, 10, -8, -5, -1};
    cout << "Insert with vector.end(), would lead to unpredictable result\n";
    copy(casts2, casts2+5, dice.end());
    cout << "(stop)" << endl;
    // insert_iterator allows adding elements to the container
    // insert at the end
    cout << "Insert with insert_iterator at vector.end()\n";
    copy(casts2, casts2+5, insert_iterator<vector<int>>(dice, dice.end()));
    copy(dice.begin(), dice.end(), out_iter);
    cout << "(stop)" << endl;
    // insert at the beginning
    cout << "Insert with insert_iterator at vector.begin()\n";
    copy(casts2, casts2+5, insert_iterator<vector<int>>(dice, dice.begin()));
    copy(dice.begin(), dice.end(), out_iter);
    cout << "(stop)" << endl;
    // insert at the end with back insert
    cout << "Insert at the end with back_insert_iterator\n";
    copy(casts3, casts3+5, back_insert_iterator<vector<int>>(dice));
    copy(dice.begin(), dice.end(), out_iter);
    cout << "(stop)" << endl;
    return 0;
}

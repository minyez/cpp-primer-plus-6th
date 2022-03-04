#include <iostream>
int main() {
    using namespace std;
    int updates = 6; // declare a variable
    int* p_updates; // declare an int pointer
    p_updates = &updates; // assign the address of updates to p_updates

    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    cout << "Address: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "New updates = " << updates << endl;

    return 0;
}

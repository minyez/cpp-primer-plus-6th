#include<iostream>
#include<cstring>
using namespace std;

int main(int argc, char** argv) {

    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";
    char name3[Size] = "NameThatIsLong";
    // char name3[Size] = "NameThatIsVeryVeryLong"; // compiler not allowed

    cout << "What's your name?" << endl;
    cin >> name1;
    cout << "Length of your name = " << strlen(name1) << endl;
    // watch \0 to stop
    cout << "Bytes of your name = " << sizeof(name1) << endl;
    // fixed 15 bytes, no matter how long the name you enter is.
    cout << name3 << endl;

    char shirt_size = 'S';

    return 0;

}
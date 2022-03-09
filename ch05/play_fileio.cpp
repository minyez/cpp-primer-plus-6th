/*
 * Date  : 2022-03-09 16:46:19
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <cstdlib>

int readchars_v1(void) {
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);
    while (cin.fail() == false) {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    return count;
}

int readchars_v2(void) {
    using namespace std;
    char ch;
    int count = 0;
    while (!cin.fail()) {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    return count;
}

int readchars_v3(void) {
    // improved from v2 with a compact while
    using namespace std;
    char ch;
    int count = 0;
    // cin.get returns a cin object, converted to a bool when needed
    while (cin.get(ch)) {
        cout << ch;
        ++count;
    }
    return count;
}

int readchars_v4(void) {
    // use stdlib.h functions instead of iostream
    using namespace std;
    char ch;
    // int ch;
    int count = 0;
    ch = cin.get();
    // when comparing ch and EOF (int, -1), char ch will be converted to int
    // if int ch, then it will be converted to char when cout.
    while (ch != EOF) {
        cout.put(ch);
        ++count;
        ch = cin.get();
    }
    return count;
}

int readchars_v5(void) {
    // improved from v4 with a compact while
    using namespace std;
    char ch;
    // int ch;
    int count = 0;
    ch = cin.get();
    while ((ch = cin.get()) != EOF) {
        cout.put(ch);
        ++count;
    }
    return count;
}

int main(int argc, char** argv) {

    using namespace std;
    char ch;
    int count = 0;
    // count = readchars_v1();
    // count = readchars_v2();
    count = readchars_v4();
    cout << endl << count << " charcters read" << endl;

    return 0;
}

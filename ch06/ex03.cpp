/*
 * Date  : 2022-03-10 15:24:02
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
using namespace std;

char get_valid_char() {
    char c;
    cin.get(c);
    // early return
    if ('\n' == c) return c;
    // skip the left
    while(cin.get() != '\n');
    return c;
}

int main(int argc, char** argv) {

    char opt = '\0';
    cout << "Please enter one of the following choices\n"
            "c) carnivore           p) pianist\n"
            "t) tree                g) game\n";
    while (opt != 'c' && opt != 't' && opt != 'p' && opt != 'g') {
        opt = get_valid_char();
        switch (opt) {
            case 'c' : cout << "A lion is a carnivore." << endl; break;
            case 'p' : cout << "Mozart is a pianist." << endl; break;
            case 't' : cout << "A Maple is a tree." << endl; break;
            case 'g' : cout << "Arknight is a game." << endl; break;
            default  : cout << "Please enter a c, p, t, or g: ";
        }
    }

    return 0;
}

#include<iostream>
#include<string>

struct widget {
    char brand[20];
    union type {
        int it;
        double dt;
    } type_val;
    union {
        long id_num;
        char id_char[20];
    }; // anonymous union
};

int main(int argc, char** argv) {

    using namespace std;

    widget prize;
    prize.type_val.it = 1;

    // 匿名union的成员将成为位于相同地址处的变量.
    prize.id_num = 1;
    cout << prize.id_num << endl;
    cout << prize.id_char << endl;
    prize.id_char[0] = 'a';
    cout << prize.id_num << endl;
    cout << prize.id_char << endl;

    
    return 0;
}
// string io
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(int argc, char** argv) {

    const int MaxCharSize = 20;
    char charr[MaxCharSize];
    string str;

    cout << "Len charr before init = " << strlen(charr) << endl;
    cout << "Len str before init = " << str.size() << endl;
    cout << endl;
    cout << "Enter charr: ";
    cin.getline(charr, MaxCharSize);
    cout << "Enter str: ";
    getline(cin, str); // 这里的getline不是类方法
    // 下面直接cin会报错: 没有与操作数匹配的<<运算符
    // cin << str;
    cout << "Len charr after init = " << strlen(charr) << endl;
    cout << "Len str after init = " << str.size() << endl;

    return 0;
}
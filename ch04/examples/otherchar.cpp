#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(int argc, char** argv) {

    wchar_t title[] = L"Chief Astrogator";
    char16_t name[] = u"Felonia Ripova";
    char32_t car[] = U"Humber Super Snipe";
    char text[] = u8"你好";

    cout << "Len of \"" << title << "\": " << sizeof(title) << endl;
    cout << "Len of \"" << title << "\": " << sizeof(name) << endl;
    cout << "Len of \"" << text << "\": " << strlen(text) << endl;

    // 原始字符串: R和定界符"x(, )x", x可以是任意基本字符组合, 前后匹配即可.
    cout << R"abc(Jim "King" Tutt uses "\n" instead of endl)abc" << endl;

    return 0;
}
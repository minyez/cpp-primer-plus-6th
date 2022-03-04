#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char** argv) {

    const int Size = 15;
    char name[Size];
    char dessert[Size];

    cout << "Your name?" << endl;
    cin.getline(name, Size);
    // 如果name长度大于Size, 那么下面dessert的输入会被跳过
    cout << "Your favourite dessert?" << endl;
    cin.getline(dessert, Size);
    cout << "Name: " << name << ", length = " << strlen(name) << endl;
    cout << "Dessert: " << dessert << ", length = " << strlen(dessert) << endl;

    return 0;

}
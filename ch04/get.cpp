#include<iostream>
#include<cstring>
using namespace std;

int main(int argc, char** argv) {

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Your name?" << endl;
    cin.get(name, ArSize).get();
    // 如果没有用第二个get拼接, 下面的get会得到一个换行符, 从而跳过输入dessert
    // cin.get()返回一个cin对象. 
    // 没有参数的get()读取一个字符, 这里涉及函数重载
    cout << "Dessert?" << endl;
    cin.get(dessert, ArSize);
    cout << name << strlen(name) << dessert << strlen(dessert) << endl;

    return 0;

}
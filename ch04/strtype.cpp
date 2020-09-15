#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv) {

    string str1 = "penguin";
    string str2, str3;
    
    str2 = str1;
    str3 = str1 + str2;
    cout << "str2 = str1 :" << str2 << endl;
    cout << "str3 = str1+str2 : " << str3 << endl;

    return 0;

}
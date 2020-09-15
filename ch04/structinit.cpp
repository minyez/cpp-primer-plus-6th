#include<iostream>
#include<string>
using namespace std;

struct people {
    string name;
    int dim[3];
    float h;
    float w; 
};

int main(int argc, char** argv) {

    people myz {
        "minyez",
        {80, 80, 80},
        1.82,
        83
    };
    people myz_copy;

    cout << myz.name << endl;
    cout << "3 dim : " << myz.dim[0] << "," << myz.dim[1] << "," << myz.dim[2] << endl;
    cout << "height (m) = " << myz.h << endl;
    cout << "weight (kg) = " << myz.w << endl;

    myz_copy = myz; // memberwise assignment
    cout << myz_copy.name << endl;
    return 0;
}
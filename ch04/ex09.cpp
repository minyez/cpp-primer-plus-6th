/*
 * Date  : 2022-03-04 17:52:10
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>

struct CandyBar {
    char brand[40];
    float weight;
    int calorie;
};

int main(int argc, char** argv) {

    using namespace std;
    CandyBar *snacks = new CandyBar [3];
    snacks[0] = {"Mocha Munch", 2.3, 350};
    snacks[1] = {"Geligao", 1.1, 400};
    snacks[2] = {"Haoliyou", 0.4, 120};
    for (auto i = 0; i < 3; ++i) {
        cout << "Information of snack " << i+1 << ":" << endl;
        cout << "    Brand: " << snacks[i].brand   << endl;
        cout << "   Weight: " << snacks[i].weight  << endl;
        cout << "  Calorie: " << snacks[i].calorie << endl;
    }

    return 0;
}

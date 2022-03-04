/*
 * Date  : 2022-03-04 17:42:44
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
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calorie: " << snack.calorie << endl;

    return 0;
}

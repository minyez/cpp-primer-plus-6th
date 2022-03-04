/*
 * Date  : 2022-03-04 17:56:54
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <cstring>

struct Pizza {
    char *brand;
    float diameter;
    float weight;
};

int main(int argc, char** argv) {

    using namespace std;
    
    Pizza *x = new Pizza;
    cout << "Enter the diameter of pizza: ";
    cin >> x->diameter;

    char temp[80];
    cout << "Enter the brand of pizza: ";
    cin.getline(temp, 80);
    x->brand = new char [strlen(temp) + 1];
    strcpy(x->brand, temp);

    cout << "Enter the weight of pizza: ";
    cin >> x->weight;

    cout << "Information of the pizza: " << endl;
    cout << "  Brand: " << x->brand << endl;
    cout << "  Diameter: " << x->diameter << endl;
    cout << "  Weight: " << x->weight << endl;

    return 0;
}

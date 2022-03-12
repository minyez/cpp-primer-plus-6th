/*
 * Date  : 2022-03-12 18:42:49
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
using namespace std;
struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void a_show_value(box);
void b_set_volume(box *);

int main(int argc, char** argv) {

    box b;
    cout << "Enter the maker name: ";
    cin >> b.maker;
    cout << "Enter the height, width and length: ";
    cin >> b.height >> b.width >> b.length;
    cin.get();
    b_set_volume(&b);
    a_show_value(b);

    return 0;
}

void a_show_value(box b) {
    cout << "Information of box" << endl;
    cout << "  Maker: " << b.maker << endl;
    cout << "      h: " << b.height << endl;
    cout << "      w: " << b.width << endl;
    cout << "      l: " << b.length << endl;
    cout << "    vol: " << b.volume << endl;
}

void b_set_volume(box *pb) {
    pb->volume = pb->height * pb->width * pb->length;
}

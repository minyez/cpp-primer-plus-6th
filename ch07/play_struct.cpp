/*
 * Date  : 2022-03-11 17:11:45
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <cmath>
using namespace std;
const double rad2deg = 57.29577951;

struct cart {
    double x;
    double y;
};

struct polar {
    double dist;
    double angle; // angle in rad 
};

cart polar2cart_v1(polar p) {
    cart c;
    c.x = p.dist * cos(p.angle);
    c.y = p.dist * sin(p.angle);
    return c;
}

polar cart2polar_v1(cart c) {
    polar p;
    p.dist = sqrt(c.x * c.x + c.y * c.y);
    // p.angle = acos(c.x/p.dist);
    // if(asin(c.x)/p.dist < 0.0) p.angle *= -1.0;
    p.angle = atan2(c.y, c.x);
    return p;
}

void polar2cart_v2(polar *pp, cart *pc) {
    pc->x = pp->dist * cos(pp->angle);
    pc->y = pp->dist * sin(pp->angle);
}

void cart2polar_v2(cart *pc, polar *pp) {
    pp->dist = sqrt(pc->x*pc->x + pc->y*pc->y);
    pp->angle = atan2(pc->y, pc->x);
}

void show_polar_v1(polar p) {
    cout << "Distance = " << p.dist << ", angle(degree) = " << p.angle*rad2deg << endl;
}

void show_polar_v2(const polar *pp) {
    cout << "Distance = " << pp->dist << ", angle(degree) = " << pp->angle*rad2deg << endl;
}

int main(int argc, char** argv) {

    cart c;
    polar p;
    cout << "Enter the x and y values: ";
    while (cin >> c.x >> c.y) {
        // p = cart2polar_v1(c);
        // show_polar_v1(p);
        cart2polar_v2(&c, &p);
        show_polar_v2(&p);
        cout << "Next two numbers (non-number to quit): ";
    }
    return 0;
}

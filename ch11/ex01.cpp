/*
 * Date  : 2022-03-19 20:18:01
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <ctime>
#include "vect.h"

int main(int argc, char** argv)
{
    using namespace std;
    using VECTOR::Vector;
    std::ofstream fout;
    char filename[] = "randomwalk.txt";
    
    fout.open(filename);

    srand(time(0));
    double direction;
    Vector step;
    Vector result(0., 0.);
    unsigned long steps = 0;
    double target;
    double dstep;
    int count = 0;
    while (cout << "Enter target distance (q to quit): " && cin >> target)
    {
        cout << "Enter step length (q to quit): ";
        if (!(cin >> dstep)) break;
        fout << "#Walk " << ++count << ": Target Distance: " << target << ", Step Size: " << dstep << endl;
        fout << steps << ": " << result << endl;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            fout << ++steps << ": " << result << endl;
        }
        cout << "After " << steps << " steps, the subject has the following location:" << endl;
        fout << "After " << steps << " steps, the subject has the following location:" << endl;
        cout << result << endl;
        fout << result << endl;
        result.polar_mode();
        cout << " or" << endl << result << endl;
        fout << " or" << endl << result << endl;
        cout << "Average outward distance per step = " << result.magval()/steps << endl;
        fout << "Average outward distance per step = " << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
    }

    fout.close();
    return 0;
}

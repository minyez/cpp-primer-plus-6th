/*
 * Date  : 2022-03-19 20:55:24
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include "vect.h"

int main(int argc, char** argv)
{
    using namespace std;
    using VECTOR::Vector;
    
    int N;
    double target;
    double dstep;

    cout << "Enter how many times to run (q or <=0 to quit): ";
    if (!(cin >> N)) return EXIT_FAILURE;
    if (N <= 0) return EXIT_SUCCESS;
    cout << "Enter target distance (q or <=0 to quit): ";
    if(!(cin >> target)) return EXIT_FAILURE;
    if(target <= 0) return EXIT_FAILURE;
    cout << "Enter step length (q or <=0 to quit): ";
    if (!(cin >> dstep)) return EXIT_FAILURE;
    if(dstep <= 0) return EXIT_FAILURE;

    srand(time(0));
    double direction;
    Vector step;
    Vector result(0., 0.);
    unsigned long *steps = new unsigned long [N];

    for (int i = 0; i < N; i++)
    {
        steps[i] = 0;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps[i]++;
        }
        // cout << "Test #" << i+1 << ":" << endl;
        // cout << "  After " << steps << " steps, the subject has the following location:" << endl;
        // cout << result << endl;
        // result.polar_mode();
        // cout << "   or" << endl << result << endl;
        // cout << "  Average outward distance per step = " << result.magval()/steps[i] << endl;
        result.reset(0.0, 0.0);
    }
    int min, max, sum;
    min = max = sum = steps[0];
    for (int i = 0; i < N; i++)
    {
        min = steps[i] < min ? steps[i] : min;
        max = steps[i] > max ? steps[i] : max;
        sum += steps[i];
    } /* end for (int i = 0; i < N; i++) */
    cout << "Result of " << N << " tests:" << endl;
    cout << "  Min steps: " << min << endl;
    cout << "  Max steps: " << max << endl;
    cout << "  Avg steps: " << sum/double(N) << endl;

    return 0;
}

/*
 * Date  : 2022-03-21 17:00:56
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <ios>
#include<iostream>
#include <ctime>
#include <cstdlib>
#include "queue.h"

const int MIN_PER_H = 60;

bool newcustomer(double x);

int main(int argc, char** argv)
{
    using namespace std;
    srand(time(0));
    cout << "Fixed queue size to default size." << endl;
    Queue line;
    int hours = 10000;
    cout << "Fixed simulation time to " << hours << " hours." << endl;

    double cust_per_hour;
    cout << "Enter customers per hour: ";
    cin >> cust_per_hour;
    double min_per_cust = MIN_PER_H / cust_per_hour;
    Item temp;
    long arrived = 0;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;
    long cyclelimit = MIN_PER_H * hours;
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if(newcustomer(min_per_cust))
        {
            arrived++;
            if(line.isfull())
                turnaways++;
            else
            {
                customers++;
                temp.set(cycle);
                line.enqueue(temp);
            }
        }
        if(wait_time<=0 && !line.isempty())
        {
            line.dequeue(temp);
            wait_time = temp.ptime();
            line_wait += cycle - temp.when();
            served++;
        }
        if (wait_time > 0) wait_time--;
        sum_line += line.queuecount();
    } /* end for (int i = 0; i < MIN_PER_HER*; i++) */

    // cout << " customers arrived: " << arrived << endl;
    if (customers>0)
    {
        cout << "customers accepted: " << customers << endl;
        cout << "  customers served: " << served << endl;
        cout << "         turnaways: " << turnaways << endl;
        // cout.setf(ios_base::boolalpha);
        // cout << "Is (turnaways + accepted == arrived)? " << (turnaways + customers == arrived) << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << " average wait time: "
             << (double) line_wait / served << " minutes" << endl;
    }
    else
        cout << "No customers!" << endl;
    cout << "Done!" << endl;

    return 0;
}

bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}

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
const int N_ATMS = 2;

bool newcustomer(double x);
int leastitem(const Queue *lines, int natm);
template <typename T>
T sum(const T *iar, int n);

int main(int argc, char** argv)
{
    using namespace std;
    srand(time(0));
    cout << "Number of ATMS: " << N_ATMS << endl;
    cout << "Fixed queue size to default size." << endl;
    Queue lines[N_ATMS];
    int hours = 10000;
    cout << "Fixed simulation time to " << hours << " hours." << endl;

    double cust_per_hour;
    cout << "Enter customers per hour: ";
    cin >> cust_per_hour;
    double min_per_cust = MIN_PER_H / cust_per_hour;
    Item temp;
    int iatm;
    long turnaways = 0;
    long arrived = 0;
    long customers[N_ATMS] = {};
    long served[N_ATMS] = {};
    long sum_line[N_ATMS] = {};
    int wait_time[N_ATMS] = {};
    long line_wait[N_ATMS] = {};
    long cyclelimit = MIN_PER_H * hours;
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if(newcustomer(min_per_cust))
        {
            arrived++;
            iatm = leastitem(lines, N_ATMS);
            if(iatm<0)
                turnaways++;
            else
            {
                customers[iatm]++;
                temp.set(cycle);
                lines[iatm].enqueue(temp);
            }
        }
        for (int i = 0; i < N_ATMS; ++i) {
            if(wait_time[i]<=0 && !lines[i].isempty())
            {
                lines[i].dequeue(temp);
                wait_time[i] = temp.ptime();
                line_wait[i] += cycle - temp.when();
                served[i]++;
            }
            if (wait_time[i] > 0) wait_time[i]--;
            sum_line[i] += lines[i].queuecount();
        }
    } /* end for (int i = 0; i < MIN_PER_HER*; i++) */

    // cout << " customers arrived: " << arrived << endl;
    if (sum(customers, N_ATMS)>0)
    {
        cout << "customers accepted: " << sum(customers, N_ATMS) << endl;
        cout << "  customers served: " << sum(served, N_ATMS) << endl;
        cout << "         turnaways: " << turnaways << endl;
        cout.setf(ios_base::boolalpha);
        // cout << "Is (turnaways + accepted == arrived)? "
        //      << (turnaways + sum(customers, N_ATMS) == arrived) << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum(sum_line, N_ATMS) / cyclelimit << endl;
        // cout << endl;
        // cout << "   Total wait time: " << sum(line_wait, N_ATMS) << endl;
        cout << " average wait time: "
             << (double) sum(line_wait, N_ATMS) / sum(served, N_ATMS) << " minutes" << endl;
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

// int: index of ATM with the least queue
// -1: all ATMs are full
int leastitem(const Queue *lines, int natm)
{
    int iatm = -1;
    int count = 1000;
    for (int i = 0; i < natm; ++i) {
        if(!lines[i].isfull() && lines[i].queuecount() < count)
        {
            iatm = i;
            count = lines[i].queuecount();
        }
    }
    return iatm;
}

template <typename T>
T sum(const T *iar, int n)
{
    T total = 0;
    for (int i = 0; i < n; ++i)
        total += iar[i];
    return total;
}

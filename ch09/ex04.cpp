/*
 * Date  : 2022-03-17 21:07:25
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include "sales.h"

int main(int argc, char** argv) {

    using namespace SALES;
    double sales[4] = {5.0, 8.2, 10.3, 3.2};
    Sales s1, s2;
    setSales(s1, sales, 3);
    setSales(s2);

    showSales(s1);
    showSales(s2);

    return 0;
}

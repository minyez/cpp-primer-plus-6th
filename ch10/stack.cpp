/*
 * Date  : 2022-03-18 21:33:00
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include "stack.h"

Stack::Stack()
{
    top = 0;
    total = 0.0;
}

bool Stack::isempty() const
{
    return !bool(top);
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item &item)
{
    if (isfull())
        return false;
    items[top] = item;
    top += 1;
    return true;
}

bool Stack::pop(Item &item)
{
    using std::cout, std::endl;
    if (isempty())
        return false;
    total += items[--top].payment;
    cout << "Current total payment: " << total << endl;
    return true;
}


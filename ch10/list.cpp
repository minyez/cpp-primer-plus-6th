/*
 * Date  : 2022-03-18 23:13:59
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include "list.h"

namespace std
{
    void set(Move &m, double x, double y)
    {
        m.x = x;
        m.y = y;
    }
    
    void right(Move &m)
    {
        m.x += 1;
    }
    
    void left(Move &m)
    {
        m.x -= 1;
    }
    
    void up(Move &m)
    {
        m.x += 1;
    }
    
    void down(Move &m)
    {
        m.y -= 1;
    }
    
    void show(Move &m)
    {
        std::cout << "(" << m.x << "," << m.y << ")";
    }
}

bool List::isempty() const
{
    return !bool(top);
}

bool List::isfull() const
{
    return top == MAX;
}

bool List::add(double x, double y)
{
    if(isfull()) return false;
    std::set(items[top++], x, y);
    return true;
}

bool List::add()
{
    if(isfull()) return false;
    std::cout << "Enter two double: ";
    double x, y;
    std::cin >> x >> y;
    while (std::cin.get() != '\n') continue;
    bool flag = add(x, y);
    return flag;
}

void List::visit(void (*pif)(Item &))
{
    for (int i = 0; i < top; i++)
        (*pif)(items[i]);
}

void List::show()
{
    std::cout << "Current moves: ";
    visit(std::show);
    std::cout << std::endl;
}

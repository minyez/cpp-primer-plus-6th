/*
 * Date  : 2022-03-18 22:33:16
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include "move.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "Move with (" << x << ", " << y << ")" << std::endl;
}

Move Move::add(const Move &m) const
{
    Move newm(this->x + m.x, this->y + m.y);
    return newm;
}

void Move::reset(double a, double b)
{
    this->x = a;
    this->y = b;
}

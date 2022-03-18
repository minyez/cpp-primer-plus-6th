/*
 * Date  : 2022-03-18 22:51:44
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <cstring>
#include <iostream>
#include "plorg.h"

Plorg::Plorg(const char *name, int ci)
{
    std::strcpy(m_name, name);
    m_ci = ci;
}

void Plorg::report() const
{
    std::cout << "plorg - name: " << m_name << ", CI: " << m_ci << std::endl;
}

void Plorg::setCI(int ci)
{
    this->m_ci = ci;
}

/*
 * Date  : 2022-03-21 10:57:03
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <cstring>
#include "cow.h"

Cow::Cow()
{
    std::strcpy(name, "Unknown");
    hobby = new char[std::strlen("Unknown")+1];
    std::strcpy(hobby, "Unknown");
    weight = 100.0;
    std::cout << "Incoming new cow: "; ShowCow();
}

Cow::Cow(const char *nm , const char *ho, double wt)
{
    std::strcpy(name, nm);
    hobby = new char[std::strlen(ho)+1];
    std::strcpy(hobby, ho);
    weight = wt;
    std::cout << "Incoming new cow: "; ShowCow();
}

Cow::Cow(const Cow &c)
{
    std::strcpy(name, c.name);
    hobby = new char[std::strlen(c.hobby)+1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    std::cout << "Selling cow: ";
    ShowCow();
    delete [] hobby;
}

Cow & Cow::operator=(const Cow &c)
{
    // avoid self assignment
    if (this==&c) return *this;
    delete hobby;
    std::strcpy(name, c.name);
    hobby = new char[std::strlen(c.hobby)+1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const
{
    std::cout << name << " - hobby: " << hobby << ", weight: " << weight << std::endl;
}

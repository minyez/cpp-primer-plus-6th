/*
 * Date  : 2022-03-18 20:16:50
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <string>
#include <cstring>
#include "person.h"

Person::Person(const std::string &ln, const char *fn)
{
    lname = ln;
    std::strcpy(fname, fn);
}

void Person::Show() const
{
    std::cout << fname << " " << lname << std::endl;
}

void Person::FormalShow() const
{
    std::cout << lname << ", " << fname << std::endl;
}

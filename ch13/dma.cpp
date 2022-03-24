/*
 * Date  : 2022-03-24 19:56:00
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <ostream>
using std::ostream;
#include <cstring>
using std::strlen;
using std::strcpy;
#include "dma.h"

// abcDMA
abcDMA::abcDMA(const char *l, int r)
{
    label = new char [strlen(l)+1];
    strcpy(label, l);
    rating = r;
}

abcDMA::abcDMA(const abcDMA &d)
{
    label = new char [strlen(d.label)+1];
    strcpy(label, d.label);
    rating = d.rating;
}

abcDMA::~abcDMA()
{
    delete [] label;
}

abcDMA & abcDMA::operator=(const abcDMA &d)
{
    if(this==&d) return *this;
    delete [] label;
    label = new char [strlen(d.label)+1];
    strcpy(label, d.label);
    rating = d.rating;
    return *this;
}

void abcDMA::View()
{
    using std::cout;
    using std::endl;
    cout << *this << endl;
}

ostream & operator<<(ostream &os, const abcDMA &d)
{
    using std::endl;
    os << "Label: " << d.label << endl;
    os << "Rating: " << d.rating;
    return os;
}

// baseDMA
baseDMA::baseDMA(const char *l, int r): abcDMA(l, r) {}
baseDMA::baseDMA(const baseDMA &d): abcDMA(d) {}
baseDMA & baseDMA::operator=(const baseDMA &d)
{
    if(this == &d) return *this;
    abcDMA::operator=(d);
    return *this;
}
ostream & operator<<(ostream &os, const baseDMA &d)
{
    os << (abcDMA &) d;
    return os;
}
void baseDMA::View()
{
    std::cout << *this << std::endl;
}

// lacksDMA
lacksDMA::lacksDMA(const char *c, const char *l, int r)
    : abcDMA(l, r)
{
    strcpy(color, c);
}
lacksDMA::lacksDMA(const lacksDMA &d)
    : abcDMA(d)
{
    strcpy(color, d.color);
}
lacksDMA & lacksDMA::operator=(const lacksDMA &d)
{
    if(this==&d) return *this;
    abcDMA::operator=(d);
    strcpy(color, d.color);
    return *this;
}
void lacksDMA::View()
{
    std::cout << *this << std::endl;
}
ostream & operator<<(ostream & os, const lacksDMA &d)
{
    os << (abcDMA &) d;
    os << std::endl << "Color: " << d.color;
    return os;
}

// hasDMA
hasDMA::hasDMA(const char *s, const char *l, int r)
    : abcDMA(l, r)
{
    style = new char [strlen(s)+1];
    strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &d)
    : abcDMA(d)
{
    style = new char [strlen(d.style)+1];
    strcpy(style, d.style);
}

hasDMA & hasDMA::operator=(const hasDMA &d)
{
    if(this==&d) return *this;
    abcDMA::operator=(d);
    delete [] style;
    style = new char [strlen(d.style)+1];
    strcpy(style, d.style);
    return *this;
}

void hasDMA::View()
{
    std::cout << *this << std::endl;
}

ostream & operator<<(ostream &os, const hasDMA &d)
{
    os << (abcDMA &) d << std::endl << "Style: " << d.style;
    return os;
}

hasDMA::~hasDMA()
{
    delete [] style;
}

/*
 * Date  : 2022-03-21 11:21:23
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include<iostream>
#include <cstring>
#include <cctype>
using std::ostream;
using std::cout;
using std::endl;
using std::istream;
using std::strcpy;
using std::strlen;
using std::strcmp;
using std::islower;
using std::tolower;
using std::isupper;
using std::toupper;
#include "string2.h"

int String::num_strings = 0;

String::String()
{
    str = new char [1];
    len = 0;
    cout << "Creating string: \"" << *this
         << "\" (having " << ++String::num_strings << ")" << endl;
}

String::String(const char *s)
{
    len = strlen(s);
    str = new char [len+1];
    strcpy(str, s);
    cout << "Creating string: \"" << *this
         << "\" (having " << ++String::num_strings << ")" << endl;
}

String::String(const String &s)
{
    len = s.len;
    str = new char [len+1];
    strcpy(str, s.str);
    cout << "Creating string: \"" << *this
         << "\" (having " << ++String::num_strings << ")" << endl;
}

String::~String()
{
    cout << "Deleting string: \"" << *this
         << "\" (remaining " << --String::num_strings << ")" << endl;
    delete [] str;
}

String & String::operator=(const String &s)
{
    if(this == &s) return *this;
    delete [] str;
    len = s.len;
    str = new char [len+1];
    strcpy(str, s.str);
    return *this;
}

String & String::operator=(const char *s)
{
    delete [] str;
    len = strlen(s);
    str = new char [len+1];
    strcpy(str, s);
    return *this;
}

String String::operator+(const String &s) const
{
    // char *news = new char [len+s.len+1];
    // strcpy(news, str);
    // strcat(news, s.str);
    // return String(news);
    return *this + s.str;
}

String String::operator+(const char *s) const
{
    char *news = new char [len+strlen(s)+1];
    strcpy(news, str);
    strcat(news, s);
    return String(news);
}

char & String::operator[](int i)
{
    return str[i];
}

const char & String::operator[](int i) const
{
    return str[i];
}

void String::stringup()
{
    char c;
    for (int i = 0; i < len; i++)
    {
        c = str[i];
        if(islower(c)) str[i] = toupper(c);
    } /* end for (int i = 0; i < len; i++) */
}

void String::stringlow()
{
    char c;
    for (int i = 0; i < len; i++)
    {
        c = str[i];
        if(isupper(c)) str[i] = tolower(c);
    } /* end for (int i = 0; i < len; i++) */
}

int String::has(const char ch)
{
    int c = 0;
    for (int i = 0; i < len; i++)
    {
        if(str[i] == ch) c++;
    } /* end for (int i = 0; i < len; i++) */
    return c;
}

bool operator<(const String &s1, const String &s2)
{
    return strcmp(s1.str, s2.str) < 0;
}

bool operator>(const String &s1, const String &s2)
{
    return strcmp(s1.str, s2.str) > 0;
}

bool operator==(const String &s1, const String &s2)
{
    return strcmp(s1.str, s2.str) == 0;
}

ostream & operator<<(ostream &os, const String &s)
{
    // os << "\"" << s.str << "\"";
    os << s.str;
    return os;
}

istream & operator>>(istream &is, String &s)
{
    // os << "\"" << s.str << "\"";
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if(is) s = temp;
    while (is && is.get() != '\n') continue;
    return is;
}

String operator+(const char *str, const String &s)
{
    char *news = new char [s.len+strlen(str)+1];
    strcpy(news, str);
    strcat(news, s.str);
    return String(news);
}

int String::HowMany()
{
    return num_strings;
}

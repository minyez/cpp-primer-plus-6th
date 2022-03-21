#pragma once
#include <iostream>
using std::ostream;
using std::istream;

class String
{
    private:
        char * str;
        int len;
        static int num_strings;
        static const int CINLIM = 80;
    public:
        // constructors and related
        String();
        String(const char *s);
        String(const String &);
        ~String();  // destructor
        int length() const {return len;};
        // overloaded operator member
        String & operator=(const String &);
        String & operator=(const char *);
        String operator+(const String &) const;  // new in string1.h
        String operator+(const char *) const;  // new in string1.h
        void stringlow();  // new in string1.h
        void stringup();  // new in string1.h
        int has(const char);  // new in string1.h
        char & operator[](int i);
        const char & operator[](int i) const;
        // overloaded operator friend
        friend bool operator<(const String &s1, const String &s2);
        friend bool operator>(const String &s1, const String &s2);
        friend bool operator==(const String &s1, const String &s2);
        friend ostream & operator<<(ostream &os, const String &s);
        friend istream & operator>>(istream &is, String &s);
        friend String operator+(const char *, const String &);  // new in string1.h
        // static function
        static int HowMany();
};


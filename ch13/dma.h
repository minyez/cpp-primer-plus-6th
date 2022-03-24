#pragma once
#include <iostream>

class abcDMA
{
    private:
        char * label;
        int rating;
    public:
        abcDMA(const char * l = "null", int r = 0);
        abcDMA(const abcDMA &);
        virtual ~abcDMA();
        virtual abcDMA & operator=(const abcDMA &);
        friend std::ostream & operator<<(std::ostream &, const abcDMA &);
        virtual void View() = 0;
};

class baseDMA: public abcDMA
{
    public:
        baseDMA(const char * l = "null", int r = 0);
        baseDMA(const baseDMA &);
        baseDMA & operator=(const baseDMA &);
        void View();
        friend std::ostream & operator<<(std::ostream &, const baseDMA &);
};

class lacksDMA: public abcDMA
{
    private:
        enum {COL_LEN = 40};
        char color[COL_LEN];
    public:
        lacksDMA(const char *c = "blank", const char * l = "null", int r = 0);
        lacksDMA(const lacksDMA &);
        lacksDMA & operator=(const lacksDMA &);
        void View();
        friend std::ostream & operator<<(std::ostream &, const lacksDMA &);
};

class hasDMA: public abcDMA
{
    private:
        char * style;
    public:
        hasDMA(const char *s = "none", const char * l = "null", int r = 0);
        hasDMA(const hasDMA &);
        ~hasDMA();
        hasDMA & operator=(const hasDMA &);
        void View();
        friend std::ostream & operator<<(std::ostream &, const hasDMA &);
};

#pragma once
#include <string>
using std::string;

class Worker
{
    private:
        string fullname;
        long id;
    protected:
        virtual void Data() const;
        virtual void Get();
    public:
        Worker(): fullname("no one"), id(0L) {}
        Worker(const string &s, long n): fullname(s), id(n) {}
        // pure virtual functions
        virtual ~Worker() = 0;
        virtual void Set() = 0;
        virtual void Show() const = 0;
};

class Waiter: virtual public Worker
{
    private:
        int panache;
    protected:
        void Data() const;
        void Get();
    public:
        Waiter(): Worker(), panache(0) {}
        Waiter(const string &s, long n, int p = 0): Worker(s, n), panache(p) {}
        Waiter(const Worker &wk, int p = 0): Worker(wk), panache(p) {}
        void Set();
        void Show() const;
};

class Singer: virtual public Worker
{
    protected:
        enum {other, alto, contralto, soprano, bass, baritone, tenor};
        enum {Vtypes = 7};
        void Data() const;
        void Get();
    private:
        static const char *pv[Vtypes];
        int voice;
    public:
        Singer(): Worker(), voice(other) {}
        Singer(const string &s, long n, int v = other): Worker(s, n), voice(other) {}
        Singer(const Worker &wk, int v = other): Worker(wk), voice(other) {}
        void Set();
        void Show() const;
};

class SingingWaiter: public Waiter, public Singer
{
    protected:
        void Data() const;
        void Get();
    public:
        SingingWaiter() {}
        SingingWaiter(const string &s, long n, int p = 0, int v = other):
            Worker(s, n), Waiter(s, n, p), Singer(s, n, v) {}
        SingingWaiter(const Worker &wk, int p = 0, int v = other):
            Worker(wk), Waiter(wk, p), Singer(wk, v) {}
        SingingWaiter(const Waiter &wt, int v = other):
            Worker(wt), Waiter(wt), Singer(wt, v) {}
        SingingWaiter(const Singer &sg, int p = 0):
            Worker(sg), Waiter(sg, p), Singer(sg) {}
        void Set();
        void Show() const;
};

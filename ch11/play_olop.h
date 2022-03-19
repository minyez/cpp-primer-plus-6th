#include <iostream>
class Time
{
    private:
        int h;
        int m;
        int s;
    public:
        Time() {h = m = s = 0;}
        Time(int h, int m = 0, int s = 0);
        void randomize(int maxh = -1);
        Time operator+(const Time &) const;
        Time operator-(const Time &) const;
        Time operator*(int) const;
        // in class declaration, but not member function
        // non-member cannot be const
        friend Time operator*(int, const Time &); // reverse operand order
        friend std::ostream & operator<<(std::ostream &os, const Time &t); // for ostream
        void show() const;
};


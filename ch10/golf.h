// used for ex01.cpp
#pragma once
const int Len = 40;
class Golf
{
    private:
        char fullname[Len];
        int handicap;
    public:
        Golf(const char* = "Unknown", int = 0);
        // interactive
        int setgolf();
        void sethandicap(int hc);
        void showgolf() const;
};

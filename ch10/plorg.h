#pragma once
class Plorg
{
    private:
        enum {MAX=19};
        char m_name[MAX];
        int m_ci;
    public:
        Plorg(const char * name="Plorga", int ci= 50);
        void report() const;
        void setCI(int);
};

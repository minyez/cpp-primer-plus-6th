#pragma once
class Cd
{
    private:
        char performers[50];
        char label[20];
        int selections;
        double playtime;
    public:
        Cd(const char *s1 = "Unknown",
           const char *s2 = "Unknown",
           int n = 0, double x = 0.0);
        Cd(const Cd &d);
        // virtual ~Cd(); // no new here, so default desctuctor is sufficient
        virtual void Report() const;
        virtual Cd & operator=(const Cd &d);
};

class Classic: public Cd
{
    private:
        char maintheme[50];
    public:
        Classic(const char *mt = "Unknown",
                const char *s1 = "Unknown",
                const char *s2 = "Unknown",
                int n = 0, double x = 0.0);
        Classic(const Classic &c);
        // virtual ~Classic();
        virtual void Report() const;
        virtual Classic & operator=(const Classic &c);
};

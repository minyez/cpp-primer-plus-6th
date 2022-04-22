#include <cstdlib>
#include <string>
using std::string;

class Person
{
    private:
        string firstname;
        string surname;
    protected:
        virtual void Data() const;
        virtual void Get();
    public:
        Person() { firstname = surname = "None"; }
        Person(const string &fn, const string &sn): firstname(fn), surname(sn) {};
        virtual ~Person() = 0;
        virtual void Set();
        virtual void Show() const;
};

class Gunslinger: virtual public Person
{
    private:
        double drawtime;
        int score;
    protected:
        void Data() const;
        void Get();
    public:
        Gunslinger(): Person(), drawtime(0), score(0) {}
        Gunslinger(const string &fn, const string &sn, double dt, int s):
            Person(fn, sn), drawtime(dt), score(s) {}
        Gunslinger(const Person &p, double dt, int s):
            Person(p), drawtime(dt), score(s) {}
        double Draw() const { return drawtime; }
        void Set() { Person::Get(); Get(); }
        void Show() const { Person::Data(); Data(); }
};

class PokerPlayer: virtual public Person
{
    // protected:
    //     void Data() const;
    //     void Get();
    public:
        PokerPlayer(): Person() {};
        PokerPlayer(const string &fn, const string &sn): Person(fn, sn) {}
        int Draw() const { return std::rand() % 52 + 1; }
        // void Set() { Person::Get(); Get(); }
        // void Show() const { Person::Data(); Data(); }
};

class BadDude: public Gunslinger, public PokerPlayer
{
    protected:
        void Get() { Gunslinger::Get(); };
        void Data() const;
    public:
        double DDraw() const { return Gunslinger::Draw(); }
        int CDraw() const { return PokerPlayer::Draw(); }
        void Set() { Person::Get(); Get(); }
        void Show() const { Person::Data(); Data(); }
};

#include <iostream>
#include <string>
#include "person.h"
using namespace std;

Person::~Person() {};
void Person::Data() const { cout << surname << ", " << firstname << endl; }
void Person::Get()
{
    cout << "Enter first name: ";
    getline(cin, firstname);
    cout << "Enter surname: ";
    getline(cin, surname);
}
void Person::Set() { Get(); }
void Person::Show() const { Data(); }

void Gunslinger::Data() const
{
    cout << "Draw time: " << Draw()
         << ", score: " << score << endl;
}

void Gunslinger::Get()
{
    cout << "Enter draw time: ";
    cin >> drawtime;
    while (std::cin.get() != '\n') continue;
    cout << "Enter score: ";
    cin >> score;
    while (std::cin.get() != '\n') continue;
}

void BadDude::Data() const
{
    Gunslinger::Data();
    cout << "Card draw: " << CDraw() << endl;
}

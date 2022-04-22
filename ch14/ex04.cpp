#include "person.h"
#include <cstring>
#include <iostream>

int main(int argc, char** argv)
{
    using namespace std;
    const int SIZE = 3;
    
    Person *persons[SIZE];
    int ps;
    for (ps = 0; ps < SIZE; ps++)
    {
        char choice;
        cout << "Enter the person category:\n"
             << "g: gunslinger  p: poker player  b: bad dude q: quit\n";
        cin >> choice;
        while (strchr("gpbq", choice) == NULL)
        {
            cout << "Please enter a g, p, b, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch (choice)
        {
            case 'g':
                persons[ps] = new Gunslinger; break;
            case 'p':
                persons[ps] = new PokerPlayer; break;
            case 'b':
                persons[ps] = new BadDude; break;
        }
        cin.get();
        persons[ps]->Set();
    }

    cout << "\nHere is recorded persons:\n";
    for (int i = 0; i < ps; i++)
    {
        persons[i]->Show();
        delete persons[i];
    } /* end for (int i = 0; i < ps; i++) */
    cout << "Bye.\n";

    return 0;
}

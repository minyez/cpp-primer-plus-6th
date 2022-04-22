#include "workermi.h"
#include "queuetp.h"
#include <cstring>
#include <iostream>

int main(int argc, char** argv)
{
    using namespace std;
    
    QueueTp<Worker*> lolas;
    Worker *pw;
    const int SIZE = 5;
    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
             << "w: waiter  s: singer  t: singing waiter  q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch (choice)
        {
            case 'w':
                pw = new Waiter; break;
            case 's':
                pw = new Singer; break;
            case 't':
                pw = new SingingWaiter; break;
        }
        cin.get();
        pw->Set();
        lolas.enqueue(pw);
    }

    cout << "\nHere is your staff:\n";
    while(lolas.dequeue(pw))
    {
        cout << endl;
        pw->Show();
        delete pw;
    }
    cout << "Bye.\n";

    return 0;
}

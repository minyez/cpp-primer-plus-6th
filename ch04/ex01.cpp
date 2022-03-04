/*
 * Date  : 2022-03-04 17:11:38
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <string>
#include <cstring>

char * get_name() {
    using namespace std;
    
    char temp[80];
    // cin >> temp; // single word
    cin.getline(temp, 80); // whole line without \n
    char * pn = new char [strlen(temp) + 1];
    strcpy(pn, temp);
    return pn;
}

int main(int argc, char** argv) {

    using namespace std;
    int age;
    char grade;
    char *first_name, *last_name;
    cout << "What is your first name? ";
    first_name = get_name();
    cout << "What is your last name? ";
    last_name = get_name();
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    grade = grade + 1;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;
}

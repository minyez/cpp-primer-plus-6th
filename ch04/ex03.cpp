/*
 * Date  : 2022-03-04 17:33:11
 * Author: Min-Ye Zhang
 * Usage :
 * TODO  : 
 */
#include <iostream>
#include <cstring>

// get_name copied from ex01
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
    char *first_name, *last_name, *full_name;
    cout << "Enter your first name: ";
    first_name = get_name();
    cout << "Enter your last name: ";
    last_name = get_name();
    // 3: 2 for comma and space, 1 for \0
    full_name = new char [strlen(first_name) + strlen(last_name) + 3];
    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);
    cout << "Here's the information in a single string: " << full_name << endl;

    return 0;
}

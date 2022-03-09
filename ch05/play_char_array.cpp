/*
 * Date  : 2022-03-09 17:17:11
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <cstring>

int main(int argc, char** argv) {

    using namespace std;
    // array of pointers to const char, cannot change the chars
    const char * cities_ccpa[2] = 
    {
        "Beijing",
        "Shanghai"
    };
    // nested char array, maximal length of string limited to 20,
    // hence use more memory than array of pointers
    char cities_nca[2][20] = 
    {
        "Beijing",
        "Shanghai"
    };
    // can modify
    strcpy(cities_nca[0], "Beiping");
    cout << cities_nca[0] << endl;

    // string array, flexible
    string cities_sa[2] = 
    {
        "Beijing",
        "Shanghai"
    };
    // can modify, straightforward syntax
    cities_sa[0] = "Beiping";
    cout << cities_sa[0] << endl;

    // const char * city = "Suzhou";
    // cout << strlen(city) << endl; // suzhou -> 6

    return 0;
}

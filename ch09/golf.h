// used for ex01.cpp
const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};

// non-interactive
void setgolf(golf &g, const char * name, int hc);
// interactive
int setgolf(golf &g);
void handicap(golf &g, int hc);

void showgolf(const golf &g);

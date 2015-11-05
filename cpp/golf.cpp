#include <iostream>
#include "golf.h"
#include <cstring>

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    using std::cin;
    using std::cout;

    int len = 0;
    cout << "输入你的名字: ";
    cin.get(g.fullname, Len);

    int bstr = strcmp(g.fullname, "\0");
    if (bstr == 0)
        return len;
    else
    {
        cout << "输入你的等级: ";
        cin >> g.handicap;
        cin.get();
        len = strlen(g.fullname);
        return len;
    }
}

void handicap(golf & g, int hc)
{
     g.handicap = hc;
}

void showgolf(const golf & g)
{
    std::cout << g.fullname << "\t";
    std::cout << g.handicap << std::endl;
}

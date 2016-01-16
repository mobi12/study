#include <iostream>
#include <valarray>
#include <string>
#include "wine.h"

using namespace std;

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : Pair(yr, bot, y, y)
{
    name = l;
}

Wine::Wine(const char *l, int y) : Pair(y)
{
    name = l;
}

void Wine::Show() const
{
    cout << "名字是: " << name << endl;
    for (int i = 0; i < year.size(); i++)
        cout << year[i] << " " << bottle[i] << endl;
}

void Wine::GetBottles()
{
    for (int i = 0; i < year.size(); i++)
    {
        cout << "输入年份： ";
        cin >> year[i];
        cout << "输入瓶数： ";
        cin >> bottle[i];
    }
}

std::string & Wine::Label()
{
    return name;
}

int Wine::sum()
{
    return bottle.sum();
}
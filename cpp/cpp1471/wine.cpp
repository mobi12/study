#include <iostream>
#include "wine.h"

using namespace std;

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : zone(ArrayInt(yr, y), ArrayInt(bot, y))
{
    name = l;
}

Wine::Wine(const char *l, int y) : zone(ArrayInt(y), ArrayInt(0))
{
    name = l;
}

void Wine::Show() const
{
    cout << "Year    Bottles" << endl;
    for (int i = 0; i < zone.year.size(); i++)
        cout << zone.year[i] << "   " << zone.bottle[i] << endl;
}

void Wine::GetBottles()
{
    for (int i = 0; i < zone.year.size(); i++)
    {    
        cout << "输入年份: ";
        cin >> zone.year[i];
        cout << "输入瓶数： ";
        cin >> zone.bottle[i];
    }
}

string & Wine::Label()
{
    return name;
}

int Wine::sum()
{
    return zone.bottle.sum();
}
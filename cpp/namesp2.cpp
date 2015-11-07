#include <iostream>
#include "namesp2.h"

namespace aname
{
    void setPeople(common &a)
    {
        using std::cout;
        using std::cin;
        using std::endl;

        cout << "输入名字：";
        getline(cin, a.name);
        cout << "输入年龄：";
        cin >> a.year;
        cin.get();
    }

    int old(common people1, common people2)
    {
        int total = 0;
        total = people1.year + people2.year;

        return total;
    }
}

#include <iostream>
#include "sales.h"

namespace SALES
{
    void setSales(Sales &s, const double ar[], int n)
    {
        using namespace std;
        for (int i = 0; i < QUARTERS; i++)
            s.sales[i] = ar[i];
        s.average = n;
        s.max = n;
        s.min = n;
    }

    void setSales(Sales &s)
    {
        using namespace std;
        cout << "输入几个小数：";
        for (int j = 0; j < QUARTERS; j++)
            cin >> s.sales[j];
        cout << "输入平均数：";
        cin >> s.average;
        cout << "输入最大数：";
        cin >> s.max;
        cout << "输入最小数：";
        cin >> s.min;
    }

    void showSales(const Sales &s)
    {
        using namespace std;
        for (int k = 0; k < QUARTERS; k++)
            cout << s.sales[k] << " ";
        cout << endl;
        cout << "平均数：";
        cout << s.average << endl;
        cout << "最大数：";
        cout << s.max << endl;
        cout << "最小数：";
        cout << s.min << endl;
    }
}

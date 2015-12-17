#include <iostream>
#include "stock3.h"

const int STKS = 4;

int main()
{
    using std::cout;
    using std::endl;
    using std::ios_base;

    Stock stocks[STKS] = {
         Stock("NanoSmart", 20.0),
         Stock("Boffo Objects", 2.0),
         Stock("Monolithic Objects", 3.25),
         Stock("Fleep Eneterprises", 6.5)
    };

    cout.precision(2);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);

    cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STKS; st++)
        cout << stocks[st] << endl;
    Stock top = stocks[0];
    for (st = 1; st < STKS; st++)
        top = top.topval(stocks[st]);
    cout << "\nMost valuable holding:\n";
    cout << top << endl;

    return 0;
}

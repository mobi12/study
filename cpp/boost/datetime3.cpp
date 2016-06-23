#include <iostream>
#include <boost/date_time/gregorian/gregorian.hpp>

using namespace std;
using namespace boost;

int main()
{
    gregorian::date d1(2016, 6, 23);
    gregorian::date d2(2016, 6, 22);
    gregorian::date_duration dd = d1 - d2;

    cout << dd.days()  << "天" << endl;

    return 0;
}
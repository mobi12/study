//使用boost时间库
#include <iostream>
#include <boost/date_time/gregorian/gregorian.hpp>

using namespace std;
using namespace boost;

int main()
{
    gregorian::date d(2016, 6, 23);

    cout << d.year() << endl;
    cout << d.month() << endl;
    cout << d.day() << endl;
    cout << d.day_of_week() << endl;
    cout << d.end_of_month() << endl;

    return 0;
}
//使用自由函数和其他方法创建date类
#include <iostream>
#include <boost/date_time/gregorian/gregorian.hpp>

using namespace std;
using namespace boost;

int main()
{
    gregorian::date d = gregorian::day_clock::universal_day();
    
    cout << d.year() << endl;
    cout << d.month() << endl;
    cout << d.day() << endl;

    d = gregorian::date_from_iso_string("20160623");

    cout << d.year() << endl;
    cout << d.month() << endl;
    cout << d.day() << endl;

    return 0;
}
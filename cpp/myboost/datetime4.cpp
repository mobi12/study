#include <iostream>
#include <boost/date_time/gregorian/gregorian.hpp>

using namespace std;
using namespace boost;

int main()
{
    gregorian::date local = gregorian::day_clock::local_day();

    cout << local << endl;

    return 0;
}
#include "mytimecount.h"

myTimeCount::myTimeCount()
{
    tips = "";
}

void myTimeCount::setValue(string t, string d)
{
    tips = t;
    count = gregorian::date_from_iso_string(d);
}

void myTimeCount::countTime()
{
    string c;
    input.open("date.log");

    input >> c;
    input >> tips;
    cout << c << endl;
    count = gregorian::date_from_iso_string(c);

    now = gregorian::day_clock::local_day();
    gregorian::date_duration surplus = now - count;
    
    cout << tips << "剩余：" << surplus << "天" << endl;
}

void myTimeCount::inputfile()
{
    output.open("date.log");
    string dstr = gregorian::to_simple_string(count);

    output << dstr;
    output << tips;

    output.close();
}
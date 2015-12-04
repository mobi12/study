#include <iostream>
#include "newstone.h"

using std::cout;
using std::endl;

static const int Lbs_per_stn = 14;	

Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
     stone = stn;
     pds_left = lbs;
     pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
     stone = pounds = pds_left = 0;
}

Stonewt::operator int() const
{
	return int(pounds  + 0.5);
}

Stonewt::operator double() const
{
	return pounds;
}

void Stonewt::chioce(char ch) const
{
	if (ch == 's')
	{
		cout << int(pounds) % Lbs_per_stn + stone << "英石" << endl;
	}
	else if (ch == 'f')
	{
		cout << double(pounds) << "磅" << endl;
	}
	else if (ch == 'p')
	{
		cout << int(pounds) << "磅" << endl;
	}
}

//重载操作符
Stonewt operator +(const Stonewt & s1, const Stonewt & s2)
{
	Stonewt sum;
	sum.stone = s1.stone + s2.stone;
	sum.pds_left = s1.pds_left + s2.pds_left;
	sum.pounds = (sum.stone * Lbs_per_stn) + sum.pds_left;
	
	return sum;
}

Stonewt operator -(const Stonewt & s1, const Stonewt & s2)
{
	Stonewt sum;
	sum.stone = s1.stone - s2.stone;
	sum.pds_left = s1.pds_left - s2.pds_left;
	sum.pounds = (sum.stone * Lbs_per_stn) + sum.pds_left;
	
	return sum;
}

Stonewt operator *(const Stonewt & s1, double n)
{
	Stonewt sum;
	sum.stone = s1.stone * n;
	sum.pds_left = s1.pds_left * n;
	sum.pounds = (sum.stone * Lbs_per_stn) + sum.pds_left;
	
	return sum;
}

std::ostream & operator <<(std::ostream & os, const Stonewt & s)
{
	os << s.stone << " stone" << s.pds_left << " pounds\n"; 
	os << s.pounds << " pounds\n";
	
	return os;
}
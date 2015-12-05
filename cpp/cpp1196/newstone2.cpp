#include <iostream>
#include "newstone2.h"

using std::cout;
using std::endl;

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

/*void Stonewt::show() const
{
	cout << stone << endl;
	cout << pds_left << endl;
	cout << pounds << endl;
}
*/
void Stonewt::show_stn() const
{
	cout << stone << " stone, " << pds_left << " pounds\n";
}

void Stonewt::show_lbs() const
{
	cout << pounds << " pounds\n";
}

//操作符重载
bool Stonewt::operator <(Stonewt & s) const
{
	if (pounds < s.pounds)
		return true;
	else
		return false;
}

bool Stonewt::operator >(Stonewt & s) const
{
	if (pounds > s.pounds)
		return true;
	else
		return false;
}

bool Stonewt::operator <=(Stonewt & s) const
{
	if (pounds <= s.pounds)
		return true;
	else
		return false;
}

bool Stonewt::operator >=(Stonewt & s) const
{
	if (stone >= s.stone)
		return true;
	else
		return false;
}

bool Stonewt::operator !=(Stonewt & s) const
{
	if (pounds != s.pounds)
		return true;
	else
		return false;
}

bool Stonewt::operator ==(Stonewt & s) const
{
	if (pounds == s.pounds)
		return true;
	else 
		return false;
}

//转换类型函数定义
Stonewt::operator int() const
{
	return int(pounds + 0.5);
}

Stonewt::operator double() const
{
	return pounds;
}

//友元函数
bool operator <(const Stonewt & s1, const Stonewt & s2)
{
	if (s1.pounds < s2.pounds)
		return true;
	else
		return false;
}

bool operator >(const Stonewt & s1, const Stonewt & s2)
{
	if (s1.pounds > s2.pounds)
		return true;
	else
		return false;
}

bool operator <=(const Stonewt & s1, const Stonewt & s2)
{
	if (s1.pounds <= s2.pounds)
		return true;
	else
		return false;
}

bool operator >=(const Stonewt & s1, const Stonewt & s2)
{
	if (s1.pounds >= s2.pounds)
		return true;
	else
		return false;
}

bool operator !=(const Stonewt & s1, const Stonewt & s2)
{
	if (s1.pounds != s2.pounds)
		return true;
	else
		return false;
}

bool operator ==(const Stonewt & s1, const Stonewt & s2)
{
	if (s1.pounds == s2.pounds)
		return true;
	else
		return false;
}
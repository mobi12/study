#include <iostream>
#include <cstring>
#include "bete.h"

Plorg::Plorg()
{
	std::strncpy(fullname, "Plorga", 18);
	fullname[19] = '\0';
	ci = 50;
}

Plorg::Plorg(const char *name, int ci_num)
{
	std::strncpy(fullname, name, 18);
	fullname[19] = '\0';
	ci = ci_num;
}

void Plorg::Ci(int ci_num)
{
	ci = ci_num;
}

void Plorg::show() const
{
	using std::cout;
	using std::endl;
	
	cout << "名字是：" << fullname << endl;
	cout << "受欢迎程度是：" << ci << endl;
}
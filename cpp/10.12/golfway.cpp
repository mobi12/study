#include <iostream>
#include <cstring>
#include "cgolf.h"

Golf::Golf()
{
	using std::strcpy;
	
	strcpy(fullname, " ");
	handicap = 0;
}

Golf & Golf::setGolf(Golf & g)
{
	using std::cin;
	using std::cout;
	
	cout << "输入你的名字: ";
	std::cin.get(g.fullname, Len);
	
	int bstr = std::strcmp(g.fullname, "\0");
	if (bstr == 0)
		return *this;
	else
	{
		cout << "输入你的等级： ";
		cin >> g.handicap;
		std::cin.get();
		return *this;
	}
}

void Golf::sethandicap(int hc)
{
	handicap = hc;
}

void Golf::showgolf() const
{
	using std::cout;
	using std::endl;
	
	cout << fullname << endl;
	cout << handicap << endl;
}
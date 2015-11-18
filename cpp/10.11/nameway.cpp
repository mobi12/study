#include <iostream>
#include <cstring>
#include "name.h"

Person::Person()
{
	using std::string;
	using std::strcpy;
	
	lname = " ";
	strcpy(fname, " ");
}

Person::Person(const std::string &ln, const char * fn)
{
	using std::string;
	
	lname = ln;
	std::strncpy(fname, fn, LIMIT - 1);
}

void Person::Show() const
{
	using std::cout;
	using std::endl;
	using std::string;
	
	cout << lname << " " << fname << endl;
}

void Person::FormalShow() const
{
	using std::cout;
	using std::endl;
	using std::string;
	
	cout << fname << " " << lname << endl;
}
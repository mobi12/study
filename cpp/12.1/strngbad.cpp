#include <cstring>
#include "strngbad.h"
//有问题的类
using std::cout;

int Stringbad::num_strings = 0;

Stringbad::Stringbad(const char * s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
	cout << num_strings <<": \"" << str << "\" objectt created\n";
}

Stringbad::Stringbad()
{
	len = 4;
	str = new char[4];
	std::strcpy(str, "C++");
	num_strings++;
	cout << num_strings << ": \"" << str << "\" default object created\n";
}

Stringbad::~Stringbad()
{
	cout << "\"" << str << "\" object deleted, ";
	--num_strings;
	cout << num_strings << " left\n";
	delete [] str;
}

std::ostream & operator <<(std::ostream & os, const Stringbad & st)
{
	os << st.str;
	
	return os;
}
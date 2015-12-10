//修改后的strngbad.cpp
#include <cstring>
#include "string1.h"

using std::cin;
using std::cout;

//初始化静态常量
int String::num_strings = 0;

//定义静态函数
int String::HowMany()
{
	return num_strings;
}

//函数定义
String::String(const char * s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String()
{
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const String & st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}

String::~String()
{
	--num_strings;
	delete [] str;
}

//操作符重载
String & String::operator =(const String & st)
{
	if (this == &st)
		return *this;
	delete [] str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);

    return *this;
}

String & String::operator =(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);

    return *this;
}

char & String::operator [](int i)
{
     return str[i];
}

const char & String::operator [](int i) const
{
     return str[i];
}

//友元函数
bool operator <(const String & st1, const String & st2)
{
     return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator >(const String & st1, const String & st2)
{
     return st2.str < st1.str;
}

bool operator ==(const String & st1, const String & st2)
{
     return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator <<(ostream & os, const String & st)
{
     os << st.str;

     return os;
}

istream & operator >>(istream & is, String & st)
{
     char temp[CINLIM];
     is.get(temp, CINLIM);
     if (is)
         st = temp;
     while (is && is.get() != '\n')
         continue;
	
	 return is;
}
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include "string2.h"

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

void String::Stringlow()
{
	for (int i = 0; i < len; i++)
		if (std::isupper(str[i]))
			str[i] = std::tolower(str[i]);
}

void String::Stringup()
{
	for (int i = 0; i < len; i++)	
		if (std::islower(str[i]))
			str[i] = std::toupper(str[i]);
}

int String::has(char ch) const
{
	int count = 0;
	
	for (int i = 0; i < len; i++)
	{
		if (str[i] == ch)
			count++;
	}
	
	return count;
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

const String & operator +(const String & st, const String & st2)
{
	static String sum;
	sum.str = new char[st.len + st2.len + 1];
	sum.len = st.len + st2.len + 1;
	std::strcpy(sum.str, st.str);
	std::strcat(sum.str, st2.str);
	
	return sum;
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

const String & operator +(const char * st, String & st2)
{	
	static String sum;
	sum = new char[std::strlen(st) + st2.len + 1];
	sum.len = std::strlen(st) + st2.len + 1;
	std::strcpy(sum.str, st);
	std::strcat(sum.str, st2.str);
	
	return sum;
}

std::ostream & operator <<(std::ostream & os, const String & st)
{
     os << st.str;

     return os;
}

std::istream & operator >>(std::istream & is, String & st)
{
     char temp[CINLIM];
     is.get(temp, CINLIM);
     if (is)
         st = temp;
     while (is && is.get() != '\n')
         continue;
	
	 return is;
}
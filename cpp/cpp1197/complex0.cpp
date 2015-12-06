#include "complex0.h"
#include <iostream>

Complex::Complex()
{
	real = unreal = 0;
}

Complex::Complex(double a, double b)
{
	real = a;
	unreal = b;
}

Complex Complex::operator +(Complex & c) const
{
	Complex sum;
	sum.real = real + c.real;
	sum.unreal = unreal + c.unreal;

	return sum;
}

Complex Complex::operator -(Complex & c) const
{
	Complex sum;
	sum.real = real - c.real;
	sum.unreal = unreal - c.unreal;

	return sum;
}

Complex Complex::operator *(Complex & c) const
{
	Complex sum;
	sum.real = (real * c.real) - (unreal * c.unreal);
	sum.unreal = (real * c.unreal) + (unreal * real);
	
	return sum;
}

Complex Complex::operator *(int num) const
{
	Complex sum;
	sum.real = real * num;
	sum.unreal = unreal * num;

	return sum;
}

Complex operator ~(Complex & c)
{
	Complex sum;
	sum.unreal = -(c.unreal);
	
	return sum;
}

bool operator >>(std::istream & os, Complex & input)
{	
	std::cout << "输入实数：";
	os >> input.real;
	if (!input.real)
		return false;
	else
	{
		std::cout << "输入虚数：";
		os >> input.unreal;
	
		return true;
	}
}

//友元函数
Complex operator *(int num, Complex & c)
{
	return c * num;
}

std::ostream & operator <<(std::ostream & os, const Complex & c)
{
	os << "(" << c.real << ", " << c.unreal << "i)";
	
	return os;
}
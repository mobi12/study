#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>
class Complex
{
	private:
		double real;
		double unreal;
	public:
		Complex();
		Complex(double a, double b);
		~Complex(){}
		Complex operator +(Complex & c) const;
		Complex operator -(Complex & c) const;
		Complex operator *(Complex & c) const;
		Complex operator *(int num) const;
		friend bool operator >>(std::istream & os, Complex & input);
		friend Complex operator ~(Complex & c);
		friend Complex operator *(int num, Complex & c);
		friend std::ostream & operator <<(std::ostream & os, const Complex & c);
};

#endif
#include <cmath>
#include "vector.h"

using std::sin;
using std::cos;
using std::atan2;
using std::cout;

namespace VECTOR
{
	const double Rad_to_deg = 57.2957795130823;
	
	void Vector::set_x(double num1, double num2)
	{
		if (mode == 'r')
			x = (sqrt(x * x + y * y)) * cos(atan2(y, x));
		else if (mode == 'p')
			x = num1 * cos(num2 / Rad_to_deg);
	}
	
	void Vector::set_y(double num1, double num2)
	{
		if (mode == 'r')
			y = (sqrt(x * x + y * y)) * sin(atan2(y, x));
		else if (mode == 'p')
			y = num1 * sin(num2 / Rad_to_deg);
	}
	
	Vector::Vector()
	{
		x = y = 0.0;
		mode = 'r';
	}
	
	Vector::Vector(double n1, double n2, char form)
	{
		mode = form;
		if (mode == 'r')
		{
			x = n1;
			y = n2;
		}
		else if (form == 'p')
		{
			set_x(n1, n2);
			set_y(n1, n2);
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() == ";
			cout << "Vector set to 0\n";
			x = y = 0.0;
			mode = 'r';
		}
	}
	
	void Vector::set(double n1, double n2, char form)
	{
		mode = form;
		if (form == 'r')
		{
			x = n1;
			y = n2;
		}
		else if (form == 'p')
		{
			set_x(n1, n2);
			set_y(n1, n2);
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() == ";
			cout << "vector set to 0\n";
			x = y = 0.0;
			mode = 'r';	
		}
	}
	
	void Vector::polar_mode()
	{
		mode = 'p';
	}
	
	void Vector::rect_mode()
	{
		mode = 'r';
	}
	
	Vector Vector::operator +(const Vector & b) const
	{
		return Vector(x + b.x, y + b.y);
	}
	
	Vector Vector::operator -(const Vector & b) const
	{
		return Vector(x - b.x, y - b.y);
	}
	
	Vector Vector::operator -() const
	{
		return Vector(-x, -y);
	}
	
	Vector Vector::operator *(double n) const
	{
		return Vector(n * x, n * y);
	}
	
	Vector operator *(double n, const Vector & a)
	{
		return a * n;
	}
	
	std::ostream & operator <<(std::ostream & os, const Vector & v)
	{
		if (v.mode == 'r')
			os << "(x, y) = (" << v.x << ", " << v.y << ") ";
		else if (v.mode == 'p')
		{
			os << "(m, a) = (" << sqrt(v.x * v.x + v.y * v.y) << ", "
				<< atan2(v.y, v.x) * Rad_to_deg << ") ";
		}
		else
			os << "Vector object mode is invalid";
		
		return os;
	}
}
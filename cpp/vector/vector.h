#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
#include <cmath>

namespace VECTOR
{
	using std::sin;
	using std::cos;
	
	class Vector
	{
		private:
			double x;
			double y;
			char mode;
			void set_x(double num1, double num2);
			void set_y(double num1, double num2);
		public:
			Vector();
			Vector(double n1, double n2, char form = 'r');
			void set(double n1, double n2, char form = 'r');
			~Vector(){}
			double xval() const {return x;}
			double yval() const {return y;}
			double magval()
			{
				return sqrt(x * x + y * y);
			}
			double angval() 
			{
				return atan2(y, x);
			}
			void polar_mode();
			void rect_mode();
			Vector operator +(const Vector & b) const;
			Vector operator -(const Vector & b) const;
			Vector operator -() const;
			Vector operator *(double n) const;
			friend Vector operator *(double n, const Vector & a);
			friend std::ostream & operator <<(std::ostream & os, const Vector & v);
	};
}

#endif
#include <iostream>

using namespace std;

inline double square(double x) {return x * x;}

int main()
{
	double a, b;
	double c = 13.0;

	a = square(5.0);
	b = square(4.5 + 7.5);

	cout << "A = " << a << " , B = " << b << endl;
	cout << "C = " << c;
	cout << " , c squared = " << square(c++) << endl;
	cout << "Now C = " << c << endl;

	return 0;
}

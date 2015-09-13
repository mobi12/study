#include <iostream>

using namespace std;

template <class Any>
void Swap(Any &a, Any &b);

int main()
{
	int i = 10;
	int j = 20;

	cout << "i, j = " << i << "," << j << endl;
	cout << "Using compiler-generated int swapper: " << endl;
	Swap(i, j);
	cout << "now i, j = " << i << "," << j << endl;

	double x = 24.5;
	double y = 81.7;
	cout << "x, y = " << x << "," << y << endl;
	cout << "using compiler-generated int swapper: " << endl;
	Swap(x, y);
	cout << "now x, y = " << x << "," << y << endl;

	return 0;
}

template <class Any>
void Swap(Any &a, Any &b)
{
	Any temp;
	temp = a;
	a = b;
	b = temp;
}

#include <iostream>

using namespace std;

int add(int *x);

int main()
{
	int *pt;
	int a = 15;
	pt = &a;

	add(pt);
	cout << a << endl;

	return 0;
}

int add(int *x)
{
	*x = *x + 1;

	return *x;
}

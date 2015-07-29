#include <iostream>

using namespace std;

int product(int n);

int main()
{
	int one;
	int two;

	while (cin >> one)
	{
		two = product(one);
		cout << two << endl;
	}

	return 0;
}

int product(int n)
{
	int f;

	if (n == 1)
		f = 1;
	else
		f = product(n - 1) * n;
	return f;
}

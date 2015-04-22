#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int *p_a;

	*p_a = a;

	cout << a << endl;
	cout << *p_a << endl;

	return 0;
}

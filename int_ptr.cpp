#include <iostream>

using namespace std;

int main()
{
	int high = 6;
	int *p_high = &high;

	cout << *p_high << endl;
	cout << &high << endl;
	cout << p_high << endl;

	return 0;
}

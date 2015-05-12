#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	cout << "输入一个整数" << endl;
	int a;
	cin >> a;
	cout << oct << a << endl;
	cout << dec << a << endl;
	cout << hex << a << endl;

	cout << "输入一个布尔值" << endl;
	bool b;
	cin >> b;
	cout << boolalpha << b;

	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int age = 35;
	const int *pt = &age;
	cout << "pt的值：" << *pt << endl;

	int sage = 80;
	pt = &sage;
	cout << "pt的新值：" << *pt << endl;

	return 0;
}

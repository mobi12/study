#include <iostream>

using namespace std;

int main()
{
	int a,b;

	cout << "输入两个值：";
	cin >> a >> b;
	cout << "这两个值是" << a << "和" << b;
	int c = a > b ? a : b;
	cout << "c等于" << c << endl;

	return 0;
}

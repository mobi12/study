#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	int y = 0;

	cout << "输入第一个整数:";
	cin >> x;
	cout << "输入第二个整数:";
	cin >> y;

	int z = 0;

	for (; x <= y; x++)
	{
		z = z + x;
		cout << z << endl;
	}

	return 0;
}

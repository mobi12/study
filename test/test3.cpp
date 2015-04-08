#include <iostream>

using namespace std;

int main()
{
	int x;
	int num[x];
	cout << "输入一个临界值" << endl;
	cin >> x;
	cout << "输入一些数字吧" << endl;
	for (int z=0;z<x;z++)
	{
		cin >> num[x];
	}
	cout << "输出数字" << endl;
	for (int y=0;y<x;y++)
	{
		cout << num[x] << endl;
	}

	return 0;
}

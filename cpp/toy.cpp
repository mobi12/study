#include <iostream>

using namespace std;

int main()
{
	union alpha {
		int a;
		float b;
		char c[20];
	};

	cout << "选择选项一输入名字" << endl;
	cout << "选择选项二输入身高" << endl;
	cout << "选择选项三输入年龄" << endl;

	alpha beta;
	int chose;
	cin >> chose;

	if (chose == 1)
	{
		cin >> beta.c;
	}
	if (chose == 2)
	{
		cin >> beta.b;
	}
	if (chose == 3)
	{
		cin >> beta.a;
	}

	return 0;
}

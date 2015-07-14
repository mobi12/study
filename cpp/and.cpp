#include <iostream>

using namespace std;

const int ArSize = 6;

int main()
{
	float naaq[ArSize];
	cout << "输入数字" << endl;

	int i = 0;
	float temp;
	cout << "第一个值：";
	cin >> temp;

	while (i < ArSize && temp >= 0)
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize)
		{
			cout << "下一个值：";
			cin >> temp;
		}
	}

	if (0 == i)
		cout << "没有数据" << endl;
	else
	{
		cout << "输入你的NAAQ：";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
			if (naaq[j] > you)
				++count;
		cout << count << endl;
	}

	return 0;
}

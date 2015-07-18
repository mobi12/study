#include <iostream>

const int ArSize = 10;

using namespace std;

int main()
{
	double donation;
	double doarry[ArSize];

	int i = 0;

	while (ArSize > i && cin >> doarry[i])
	{
		donation += doarry[i];
		i++;
	}
	
	double value = donation / ArSize;
	int count = 0;

	for (int j = 0; j < ArSize; j++)
	{
		if (doarry[j] > value)
		{
			count++;
		}
	}

	cout << "一共有" << count << "个数字大于平均值" << value << endl;

	return 0;
}

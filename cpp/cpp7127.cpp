#include <iostream>

const int ArSize = 10;

using namespace std;

int product(const int *begin, const int *end);

int main()
{
	int num[ArSize];
	int count = 0;

	for (int i = 0; i < ArSize; i++)
	{
		cout << "输入数字#" << i + 1 << ": ";
		if (cin >> num[i])
			count++;
		else 
			break;
	}

	int total = product(num, num + count);

	cout << "相加等于" << total << endl;

	return 0;	
}

int product(const int *begin, const int *end)
{
	const int *pt;
	int total = 0;

	for (pt = begin; pt != end; pt++)
		total = total + *pt;

	return total;
}

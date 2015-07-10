#include <iostream>
#include <string>

using namespace std;

const int x = 12;

int main()
{
	string year[x] = {
		"一月",
		"二月",
		"三月",
		"四月",
		"五月",
		"六月",
		"七月",
		"八月",
		"九月",
		"十月",
		"十一月",
		"十二月"
	};
	int count = 0;
	int one = 0;
	int two = 0;

	while (count < 12)
	{
		cout << "输入" << year[count] << "的销量: ";
		++count;
		cin >> one;
		two += one;
	}
	cout << "12个月的销量总和是：" << two << endl;

	return 0;
}

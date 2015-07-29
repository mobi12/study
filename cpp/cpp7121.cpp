#include <iostream>

using namespace std;

double averge(int x, int y);

int main()
{
	int one;
	int two;

	cout << "输入两个数字计算平均值: ";

	while (cin >> one >> two && two != 0 && one != 0)
	{
		int answer = averge(one, two);
		cout << "平均值为" << answer << endl;
		cout << "继续输入，或输入0退出: ";
	}

	return 0;
}

double averge(int x, int y)
{
	const double avg = 2.0;
	int total = avg * x * y / (x + y);
	return total;
}

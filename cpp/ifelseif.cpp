#include <iostream>

using namespace std;

const int Fave = 27;

int main()
{
	int n;

	cout << "输入一个100到1之间的数";
	cout <<  "我中意的数字是：";
	do {
		cin >> n;
		if (n < Fave)
			cout << "太小了,重新输入:";
		else if (n > Fave)
			cout << "太大了,重新输入:";
		else
			cout << "答对了" << endl;
	} while (n != Fave);

	return 0;
}

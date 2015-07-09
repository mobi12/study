#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	int y = 0;

	do {
		cout << "输入一个数 :";
		cin >> x;
		y = y + x;
		cout << "目前等于" << y << endl;
	}while (x != 0);

	return 0;
}

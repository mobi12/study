#include <iostream>

using namespace std;

int main()
{
	cout << "今天是201几年？" << endl;
	int year;
	(cin >> year).get();
	cout << "输入一个地址吧！" << endl;
	char address[20];
	cin.getline (address,20);
	cout << "今天是" << year << "年" << endl;
	cout << "地址是" << address << endl;
	cout << "Done" << endl;

	return 0;
}

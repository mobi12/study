#include <iostream>
#include <string>

using namespace std;

struct man {
	string name;
	double money;
};

int main()
{
	int much;
	cout << "输入捐款者数量：";
	cin >> much;

	man *parr = new man[much];

	for (int i = 0; i < much ; i++)
	{
		cout << "输入名字：";
		cin >> parr[i].name;
		cout << "输入金额：";
		cin >> parr[i].money;
	}
	for (int j = 0; j < much; j++)
	{
		if (parr[j].money > 10000)
			cout << "重要捐款者: " << parr[j].name << endl;
		else if (parr[j].money < 10000)
			cout << "捐款者：" << parr[j].name << endl;
		else if (parr[j].money == 0)
			cout << parr[j].name << "没有" << endl;
	}

	return 0;
}

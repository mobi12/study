#include <iostream>

using namespace std;

const int Max = 5;

int main()
{
	int golf[Max];
	cout << "输入你的成绩" << endl;
	cout << "你必须输入" << Max << "次" << endl;

	int i;

	for (i = 0; Max > i; i++)
	{
		cout << "第一次#" << i + 1 << "：";
		while (!(cin >> golf[i]))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "输入一个数字：";
		}
	}

	double total = 0.0;
	for (i = 0; Max > i; i++)
		total += golf[i];
	cout << total / Max << " = average score"
		<< Max << "次" << endl;
	return 0;
}

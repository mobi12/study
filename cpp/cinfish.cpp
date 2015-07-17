#include <iostream>

using namespace std;

const int Max = 5;

int main()
{
	double fish[Max];
	cout << "输入鱼的重量" << endl;
	cout << "你最大可以输入" << Max << "次" << endl;
	cout << "鱼#1：";

	int i = 0;

	while (Max > i && cin >> fish[i])
	{
		if (++i < Max)
		cout << "鱼#" << i + 1 << ": ";
	}

	double total = 0.0;
	
	for (int j = 0; i > j; j++)
		total += fish[j];

	if (i == 0)
		cout << "No fish\n";
	else
		cout << total / i << "= average weight of "
			<< i << "fish" << endl;
	cout << "Done." << endl;

	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int tvarps;
	int value;

	while (cin >> tvarps && tvarps > 0)
	{
		if (tvarps < 5000)
		{
			cout << "不收税" << endl;
		}
		else if (tvarps > 5001 && tvarps < 15000)
		{
			tvarps = tvarps - 5000;
			value = tvarps * 0.1;
		}
		else if (tvarps > 15001 && tvarps < 35000)
		{
			tvarps = tvarps - 5000;
			tvarps = tvarps - 10000;
			value = (tvarps * 0.15) + (10000 * 0.1);
		}
		else if (tvarps > 35000)
		{
			tvarps = tvarps - 5000;
			tvarps = tvarps - 10000;
			tvarps = tvarps - 20000;
			value = (tvarps * 0.2) + (10000 * 0.1) + (20000 * 0.15);
		}
		
		cout << "税额为：" << value << endl;
	}

	return 0;
}

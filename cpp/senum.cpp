#include <iostream>

enum {red,orange,yellow,green,blue,violet,indigo};

using namespace std;

int main()
{
	cout << "输入颜色标签（1-6）:";
	int code;
	cin >> code;

	while (red <= code && indigo >= code)
	{
		switch (code)
		{
			case red : cout << "red" << endl; break;
			case orange : cout << "orange" << endl; break;
			case yellow : cout << "yellow" << endl; break;
			case green : cout << "green" << endl; break;
			case blue : cout << "blue" << endl; break;
			case violet : cout << "violet" << endl; break;
			case indigo : cout << "indigo"; break;
		}
		cout << "输入颜色代码(1-6):";
		cin >> code;
	}

	cout << "再见" << endl;
	return 0;
}

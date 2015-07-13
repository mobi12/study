#include <iostream>

using namespace std;

int main()
{
	char ch;

	cout << "输入" << endl;
	cin.get(ch);

	while (ch != '.')
	{
		if (ch == '\n')
			cout << ch;
		else
			cout << ++ch;
		cin.get(ch);
	}

	cout << endl << "再见" << endl;

	return 0;
}

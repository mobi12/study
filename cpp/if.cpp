#include <iostream>

using namespace std;

int main()
{
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);

	while (ch != '.')
	{
		if (ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}

	cout << spaces << "个空格" << total;
	cout << "个字符" << endl;

	return 0;
}

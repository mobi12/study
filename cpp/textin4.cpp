#include <iostream>

using namespace std;

int main()
{
	char ch;
	int count = 0;

	while (cin.get(ch))
	{
		cout << ch;
		++count;
	}

	cout << endl << count << "个字符" << endl;

	return 0;
}

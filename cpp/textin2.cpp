#include <iostream>

using namespace std;

int main()
{
	char ch;
	int count = 0;

	cout << "输入字符" << endl;
	cin.get(ch);
	
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << "个字符" << endl;

	return 0;
}

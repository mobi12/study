#include <iostream>

using namespace std;

int main()
{
	char ch;
	int count = 0;
	
	cout << "输入字符，输入#退出" << endl;
	cin >> ch;
	
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin >> ch;
	}
	
	cout << endl << count << "阅读字符" << endl;

	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	char ch;
	int count = 0;
	cin.get(ch);
	
	while (cin.fail() == false)
	{
		cout << ch;
		++count;
		cin.get(ch);
	}

	cout << endl << count << "个字符" << endl;

	return 0;
}

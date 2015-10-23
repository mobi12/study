#include <iostream>
#include <string>

using namespace std;

void Chtop(string & str);

int main()
{
	string str1;

	cout << "输入一个小写字母: ";
	while (cin >> str1 && str1[0] != 'q')
	{
		Chtop(str1);
		cout << str1 << endl;
		cout << "下一个小写字母：";
	}

	return 0;
}

void Chtop(string & str)
{
	int i = sizeof str;
	for (int j = 0; j < i; j++)
	{
		str[j] = str[j] - 32;
	}
}

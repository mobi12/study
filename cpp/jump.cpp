#include <iostream>

using namespace std;

const int ArSize = 80;

int main()
{
	char line[ArSize];
	int spaces = 0;

	cout << "输入一行文字:" << endl;
	cin.get(line,ArSize);
	cout << "完成这一行\n" << line << endl;
	cout << "这一行第一个：\n";

	for (int i = 0; '\0' != line[i]; i++)
	{
		cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] == ' ')
			continue;
			spaces++;
	}

	cout << "\n" << spaces << "空格" << endl;
	cout << "Done." << endl;

	return 0;
}

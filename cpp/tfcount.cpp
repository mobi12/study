#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int count;
	char ch;
	cout << "输入文件名: ";
	char name[10];
	cin >> name;
	cout << endl;
	cout << "输入检索字：";
	cin >> ch;
	cout << endl;

	ifstream inFile;
	inFile.open(name);

	while (inFile.good())
	{
		char test;
		inFile >> test;
		
		if (test == ch)
			count++;
	}

	cout << "一共有" << count - 1 << "个" << ch << "字" << endl;
	
	return 0;
}

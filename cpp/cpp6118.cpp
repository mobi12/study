#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	cout << "输入文件名：";
	
	int count = 0;
	char filename[20];
	char ch;
	cin >> filename;
	ifstream inFile;
	inFile.open(filename);

	while (inFile.good())
	{	
		inFile >> ch;
		count++;
	}
	cout << count - 1 << "个字符" << endl;
	
	inFile.close();
	
	return 0;
}

#include <iostream>
#include <fstream>

using namespace std;

struct man {
	char name[20];
	double money;
};

int main()
{
	ifstream fin;
	fin.open("test.txt");

	int num;
	fin >> num;
	fin.get();
	man *parr = new man[num];

	if (fin.good())
		for (int i = 0; i < num; i++)
		{
			fin.getline(parr[i].name,20);
			fin >> parr[i].money;
			fin.get();
		}
	for (int j = 0; j < num; j++)
	{
		if (parr[j].money >= 10000)
			cout << "重要捐款人：" << parr[j].name << endl;
		else if (parr[j].money < 10000)
			cout << "捐款人：" << parr[j].name << endl;
		else if (parr[j].money == 0)
			cout << parr[j].name << "没有" << endl;
	}

	delete []parr;
	fin.close();
	return 0;
}

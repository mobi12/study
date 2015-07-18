#include <iostream>
#include <string>
#include <fstream>
#include "myfun.h"

using namespace std;
using namespace my;

int main()
{
	ofstream outPut;
	ifstream inPut;
	outPut.open("toy2.txt");
	inPut.open("toy2.txt");
	menu();
	int choice;
	cin >> choice;

	switch (choice)
	{
		case 1 : cout << "呵呵" << endl;break;
		case 2 : outPut << "我去" << endl;break;
		case 3 : cout << "退出鸟" << endl;break;
		default : cout << "没有" << choice << "选项";
	}

	if (inPut.good())
	{
		string out;
	       	inPut >> out;
		cout << out << endl;
	}

	outPut.close();
	inPut.close();

	return 0;
}

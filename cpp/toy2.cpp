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
	int choice;
	menu();

	while (cin >> choice)
	{	
		if (choice == 1)
		{
			cout << "我呵呵你一脸" << endl;
			break;
		}
		else if (choice == 2)
		{
			outPut.open("toy2.txt");
			outPut << "我去" << endl;
			inPut.open("toy2.txt");
			break;
		}
		else if (choice == 3)
		{	
			cout << "我还是退了吧" << endl;
			break;
		}	

		else
		{	
			cout << choice << "不是选项" << endl;
			menu();
		}
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

#include <iostream>

using namespace std;

const int strsize = 20;
const int ArSize = 4;
struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

int main()
{
	bop someone[ArSize] = {
		{"Wimp Macho","Raki","Rhodes",1},
		{"Celia","Laiter","Hoppy",2},
		{"Pat","Hand","Next",3},
		{"Junior","MIPS","Analyst",4}
	};

	cout <<  "Benevolent Order of Programmers Report\n"
		<< "a.display by name\t b.display by title\n"
		<< "c.display by bopname\t d.display by preference\n"
		<< "q.quit\n";
	cout << "Enter a choice: ";
	
	char choice;

	while (cin >> choice && choice != 'q')
	{
		if (choice == 'a')
		{
			for (int i = 0; i < ArSize; i++)
				cout << someone[i].fullname << endl;
		}
		else if (choice == 'b')
		{
			for (int j = 0; j < ArSize; j++)
				cout << someone[j].title << endl;
		}
		else if (choice == 'c')
		{
			for (int k = 0; k < ArSize; k++)
				cout << someone[k].bopname << endl;
		}
		else if (choice == 'd')
		{
			for (int l = 0; l < ArSize; l++)
				cout << someone[l].preference << endl;
		}
		else
			cout << "not this choice" << endl;
		cout << "Enter a choice: ";
	}

	cout << "bye" << endl;
	return 0;
}

#include <iostream>

using namespace std;

void menu();

int main()
{
	char choice;
	
	while (choice != 'q')
	{	
		switch (choice)
		{
			case 'c' : cout << "A maple is a carnivore" << endl;break;
			case 't' : cout << "A maple is a tree" << endl;break;
			case 'p' : cout << "A maple is a pianist" << endl;break;
			case 'g' : cout << "A maple is a game" << endl;break;
			default : cout << "Pleaese enter a c,p,t,g: ";
		}
		menu();
		cin >> choice;		
	}

	return 0;
}

void menu()
{
	cout << "Please enter one of the following choices:\n"
		<< "c)carnivore\t p)pianist\n"
		<< "t)tree\t g)game\n";

}

#include <iostream>

const int ArSize = 20;

using namespace std;

int main()
{
	char name[ArSize];

	cout << "your first name" << endl;
	cin >> name;
	cout << "here is your name and ASCII" << endl;
	int i = 0;

	while (name[i] !='\0')
	{
		cout << name[i] << ":" << int(name[i]) << endl;
		i++;
	}

	return 0;
}

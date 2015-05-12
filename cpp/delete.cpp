#include <iostream>
#include <cstring>

using namespace std;

char *getname(void);

int main()
{
	char *name = getname();
	cout << name << endl;
	delete []name;

	name = getname();
	cout << name << endl;
	delete []name;

	return 0;
}

char *getname()
{
	char empty[80];
	cout << "press name" << endl;
	cin >> empty;

	char *pn = new char[strlen(empty)+1];
	strcpy(pn,empty);
	
	return pn;
}	


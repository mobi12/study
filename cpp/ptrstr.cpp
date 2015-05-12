#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char animal[20] = "bear";
	const char * bird = "wren";
	char * ps;

	cout << animal << "and";
	cout << bird << endl;
	
	cin >> animal;
	
	ps = animal;
	cout << ps;
	cout << animal << (int *)animal << endl;
	cout << ps << (int *)ps << endl;

	ps = new char[strlen (animal)+1];
	strcpy(ps,animal);
	cout << animal << (int *)animal << endl;
	cout << ps << (int *)ps	<< endl;

	delete [] ps;
	return 0;
}

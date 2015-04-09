#include <iostream>

using namespace std;

int main()
{
	char name1[10];
	char name2[10];

	cin.get(name1,10);
	cin.get(name2,10);
	cin.clear();

	cout << name1 << endl;
	cout << name2 << endl;

	return 0;
}

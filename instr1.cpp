#include <iostream>

using namespace std;

int main()
{
	char name1[10];
	char name2[10];

	cin.get(name1,10).get();
	cin.getline(name2,5).getline(name2,5);

	cout << name1 << endl;
	cout << name2 << endl;

	return 0;
}

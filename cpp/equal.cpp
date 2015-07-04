#include <iostream>

using namespace std;

int main()
{
	int qui[10] = 
		{20,20,20,20,20,20,19,20,20,20};

	cout << "Doing it right: " << endl;
	int i;
	for (i = 0; qui[i] == 20; i++)
		cout << "qui" << i << "is 20" << endl;

	cout << "Doing it dangerrously wrong: " << endl;
	for (i = 0; qui[i] = 0; i++)
		cout << "qui" << i << "is 20" << endl;

	return 0;
}

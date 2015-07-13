#include <iostream>

using namespace std;

int main()
{
	int count = 0;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		for (int k = count - 1; k > i; k-- )
		{
			cout << ".";
		}
		cout << " ";
		for (int b = 0; b <= i; b++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}

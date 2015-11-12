#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int i = 0;
	
	for (int a = 50; a <= 100; a++)
		for (int i = 2; i < a; i++)
			if (a % i == 0 && a % 2 == 0)
				break;
			else if (a % i != 0 && a % 3 != 0 && a % 5 != 0)
			{
				cout << a << "\t";
				break;
			}
	
	return 0;
}
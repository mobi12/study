#include <iostream>

using namespace std;

const int ArSize = 12;

int main()
{
	char hello[ArSize] = "Hello world";

	for (int i = 11; i >= 0; i--)
		cout << hello[i];
	cout << endl;

	return 0;
}

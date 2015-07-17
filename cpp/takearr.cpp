#include <iostream>
//将一的东西给二
using namespace std;

const int As = 6;

int main()
{
	int one[As] = {1,2,3,4,5,6};
	int two[As];

	for (int i = 0; i < As; i++)
	{
		two[i] = one[i] + 2;
	}

	for (int j = 0; j < As; j++)
	{
		cout << two[j] << endl;
	}

	return 0;
}

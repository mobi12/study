#include <iostream>

using namespace std;

int main()
{
	int one[10] = {1,2,3,4,5,6,7,8};

	cout << *one << endl;
	cout << *(one+1) << endl;
	for (int i=0;i<10;i++)
	{
		int j = *(one+i);
		cout << j << endl;
	}

	return 0;
}

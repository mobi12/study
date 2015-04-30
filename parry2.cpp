#include <iostream>

using namespace std;

int main()
{
	int size;
	cin >> size;
	int *pt = new int [size];

	cin >> pt[5];
	cout << pt[5] << endl;

	int ptt[5] = {1,2,3,4,5};
	int x = *(ptt+3);
	cout << x << endl;

	delete pt;

	return 0;
}

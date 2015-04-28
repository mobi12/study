#include <iostream>

using namespace std;

int main()
{
	int *pt = new int [10];
	pt[0] = 1;
	pt[1] = 2;
	pt[5] = 5;
	
	cout << pt[0] << endl;
	cout << pt[1] << endl;
	cout << pt[5] << endl;
	delete pt;

	return 0;
}

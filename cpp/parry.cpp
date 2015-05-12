#include <iostream>

using namespace std;

int main()
{
	int *pt = new int [10];
	pt[1] = 10;
	pt[2] = 20;
	pt = pt+1;

	cout << pt[1] + 1 << endl;
	pt = pt-1;
	delete pt;

	return 0;
}

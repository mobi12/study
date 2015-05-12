#include <iostream>

using namespace std;

int main()
{
	int one[10] = {1,2,3,4,5};
	double two[10] = {0.1,0.2,0.3,0.4,0.5};

	int *pone = one;
	double *ptwo = &two[0];

	cout << sizeof (*pone) << endl;
	cout << sizeof (one) << endl;
        cout << sizeof (*ptwo) << endl;
	cout << sizeof (two[0]) << endl;

	return 0;
}	

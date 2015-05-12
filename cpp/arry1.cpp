#include <iostream>

using namespace std;

int main()
{
	int bit[5]={1,2,3,45,5};
	int yamcosts[3] ={20,30,40};
	cout << bit[1]+bit[2]+bit[0] << endl;
	cout << yamcosts[0] << endl;
	int total =yamcosts[0]+2*yamcosts[2];
	cout << total << endl;
	
	return 0;
}

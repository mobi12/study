#include <iostream>

using namespace std;

int main()
{
	int *pt = new int;
	*pt = 5;
	cout << *pt << endl;
	cout << &pt << endl;
	
	return 0;
}

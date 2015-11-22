#include <iostream>
#include "list.h"

using namespace std;

void show(int shu[])
{
	for (int i = 0; i < 5; i++)
		cout << shu[i] << "\t";
	cout << endl;
}

int main()
{
	List one;
	int number = 0;
	
	while (cin >> number && number != 0)
	{
		one.isempty();
		one.push(number);
	}
	
	one.visit(show);
	
	return 0;
}
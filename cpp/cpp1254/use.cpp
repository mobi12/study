#include <iostream>
#include "stack.h"

int main()
{
	using namespace std;
	
	Item x[10] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	Item y = 0;
	Stack one;
	
	for (int i = 0; i < 10; i++)
	{
		if (one.isempty())
			one.push(x[i]);
	}
	
	Stack two(one);
	for (int i = 0; i < 10; i++)
	{
		if (two.isfull())
			two.pop(y);
		cout << y << endl;
	}

	return 0;	
}
#include <iostream>

using namespace std;

int main()
{
	static int num[5]={1,2,3,4,5};
	for (int i=0;i<5;i++)
	{
		cout << num[i] << endl;
	}
	return 0;
}

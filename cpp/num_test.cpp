#include <iostream>

using namespace std;

int main()
{
	cout << "ENter trhe starting countdown value:";
	int limit;
	cin >> limit;
	int i;
	for (i = limit;i;i--)
		cout << "done now that i = " << i << endl;
	
	return 0;
}

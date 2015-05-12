#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	int i;
	char a[20];
	char b[20];
	
	while(1)
	{
		cin >> a;
		cin >> b;

		if ((i=strcmp(a,b)) > 0)
		{
			cout << "第一句比第二句长了" << endl;
		}
		else if ((i=strcmp(a,b)) == 0)
		{	
			cout << "这两段话一样长" << endl;
		}
		else if ((i=strcmp(a,b)) < 0)
		{
			cout << "第一句比第二句短了" << endl;
		}
	}

	return 0;
}

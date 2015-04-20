#include <iostream>

using namespace std;

int main()
{
	struct park {
		int a;
		char b;
		float c;
	};

	park arr[20] = {
		{12,'z',3.6},
		{1,'b',3.5}
	};

	cout << arr[0].b << endl;
	cin >> arr[3].b;
	cout << arr[3].b << endl;	
	
	return 0;
}

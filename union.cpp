#include <iostream>

using namespace std;

int main()
{
	union park {
		int a;
		float b;
	};
	struct box {
		int c;
		int d;
	};
	
	int x;

	cout << sizeof x << endl;
	cout << sizeof (park) << endl;
	cout << sizeof (box) << endl;

	return 0;
}

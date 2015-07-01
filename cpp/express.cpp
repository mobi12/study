#include <iostream>

using namespace std;

int main()
{
	int x = 100;

	cout << (x<3) << endl;
	cout << (x>3) << endl;
	cout.setf(ios_base::boolalpha);
	cout << (x>3) << endl;

	return 0;
}

#include <iostream>

using namespace std;

const int a = 100;

int main()
{
	cout << "输入一个值" << endl;
	int by;
	cin >> by;

	cout << "counting by" << by << endl;

	for (int i = 0; i < a;i += by )
		cout << i << endl;

	return 0;
}
	

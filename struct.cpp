#include <iostream>
#include <string>

using namespace std;

struct hat
{
	int i;
	float j;
	string k;
};

int main()
{
	hat ball ={
		   20,
		   1.5,
		   "erro!"
	};
	cout << ball.i << endl;
	cout << ball.j << endl;
	cout << ball.k << endl;
	cin >> ball.j;
	cout << ball.j << endl;
	cin >> ball.k;
	cout << ball.k << endl;

	return 0;
}

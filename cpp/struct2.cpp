#include <iostream>
#include <string>

using namespace std;

struct mark {
	int i;
	float j;
};

int main()
{
	mark mike = {1,2.5};
	mark milk = mike;

	cout << milk.i << endl;
	cout << milk.j << endl;

	return 0;
}

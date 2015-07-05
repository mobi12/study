#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	cout << "enter the delay time: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "starting\a" << endl;
	clock_t start = clock();

	while (clock() - start < delay)
		;

	cout << "done\a" << endl;
	
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int rats = 100;
	int & rodents = rats;

	cout << "rats = " << rats;
	cout << " , rodents = " << rodents << endl;

	rats++;
	cout << "修改rats的值为 " << rats;
	cout << "rodents的值为 " << rodents << endl;

	return 0;
}

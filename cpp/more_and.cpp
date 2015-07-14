#include <iostream>

using namespace std;

const char *qualify[4] = 
{
	"10000-meter race.\n",
	"mud tug-of-war.\n",
	"masters canoe jousting.\n",
	"pie-throwing festival.\n"
};

int main()
{
	int age;
	cout << "输入你的年龄：";
	cin >> age;

	int index;

	if (17 > age && 35 < age)
		index = 0;
	else if (35 >= age && 50 > age)
		index = 1;
	else if (age >= 50 && 65 > age)
		index = 2;
	else 
		index = 3;
	
	cout << "You qualify for the " << qualify[index];

	return 0;
}

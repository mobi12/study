#include <iostream>

using namespace std;

struct stu{
	int a;
	float b;
	char name[20];
};

int main()
{
	stu *ps = new stu;
	cin.get(ps->name,20);
	cin >> ps->a;
	cin >> ps->b;
	cout << ps->a << endl;
	cout << ps->b << endl;
	cout << (*ps).name << endl;

	delete ps;

	return 0;
}

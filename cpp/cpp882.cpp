#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
	string name;
	double weight;
	int heat;
};

void Sweet(CandyBar & a, char * b, double c, int d)
{
	a.name = b;
	a.weight = c;
	a.heat = d;
}

void Show(CandyBar & b)
{
	cout << b.name << endl;
	cout << b.weight << endl;
	cout << b.heat << endl;
}

int main()
{
	CandyBar honey = {
		"Millennium Munch",
		2.85,
		350
	};
	char cname[20] = "Bee";
	double wei = 5.5;
	int carl = 400;

	cout << "front" << endl;
	Show(honey);
	Sweet(honey, cname, wei, carl);
	cout << "now" << endl;
	Show(honey);

	return 0;
}

#include <iostream>
#include <cstring>

using namespace std;

struct stringy
{
	char *str;
	int ct;
};

void set(stringy &stry, char *ch);
void Show(stringy stry, int count = 8);
void Show(const char *pstr, int count = 8);

int main()
{
	char b;
	stringy beany = {
		&b
	};
	char testing[] = "REALITY";

	set(beany, testing);
	Show(beany);
	Show(beany, 2);

	testing[0] = 'D';
	testing[1] = 'u';
	Show(testing);
	Show(testing, 3);
	Show("Done");

	return 0;
}

void set(stringy &stry, char *ch)
{
	stry.str = new char[strlen(ch)];
	strcpy(stry.str, ch);
}

void Show(stringy stry, int count)
{
	for (int i = 0; i < count; i++)
		cout << *(stry.str + i);
	cout << endl;
}

void Show(const char *pstr, int count)
{
	for (int i = 0; i < count; i++)
		cout << *(pstr + i);
	cout << endl;
}

#include <iostream>
#include <string>

using namespace std;

void Show(string *str);
void Show(string *str, int count);
int main()
{
	string str1 = "blabla";
	Show(&str1);
	
	int num = 5;
	Show(&str1, num);

	return 0;
}

void Show(string *str)
{
	cout << *str << endl;
}
void Show(string *str, int count)
{
	if (count != 0)
	{
		for (int i = 0; i < count; i++)
			cout << *str << endl;
	}
}

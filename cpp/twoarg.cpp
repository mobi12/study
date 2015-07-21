#include <iostream>

using namespace std;

void n_chars(char,int);

int main()
{
	int times;
	char ch;

	while (ch != 'q')
	{
		cout << "Enter an integer: ";
		cin >> times;
		cout << "Enter another character or press the"
			"q-key to quit: ";
		cin >> ch;
		n_chars(ch,times);
	}
	cout << "THE VALUE OF TIMES IS " << times << ".\n";
	cout << "Bye\n";

	return 0;
}

void n_chars(char c,int n)
{
	int i = 0;
	while (i++ < n)
		cout << c;
	cout << endl;
}

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int ch;
	int count = 0;

	while ((ch = cin.get()) != EOF)
	{
		cout.put(char (ch));
		++count;
	}

	cout << endl << count << "个字符" << endl;

	return 0;
}

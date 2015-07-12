#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int count = 0;
	char word[20];
	while (strcmp(word,"done"))
	{
		cin >> word;
		++count;
	}

	cout << count - 1 << "个单词" << endl;
	return 0;
}

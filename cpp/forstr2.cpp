#include <iostream>

using namespace std;

int main()
{
	cout << "Enter a word:";
	string word;
	cin >> word;

	int i, j;
	char temp;
	for (j = 0,i = word.size() - 1; j < i; --i, j++)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}

	cout << word << " Done" << endl;

	return 0;
}

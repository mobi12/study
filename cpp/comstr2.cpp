#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word = "?ate";

	for (char ch = 'a'; word != "mate"; ch ++)
	{
		cout << word << endl;
		word[0] = ch;
	}

	cout << "最后word为 " << endl;

	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	int count = 0;

	while (word != "done")
	{
		count++;
		cin >> word;
	}

	cout << count - 1 << "个单词" << endl;
	return 0;
}

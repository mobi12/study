#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string word;
	int count = 0;
	int other = 0;
	int space = 0;

	while (word != "q")
	{
		cin >> word;

		if (isalpha(word[0]))
		{
			switch (word[0])
			{
				case 'a' : count++;break;
				case 'e' : count++;break;
				case 'i' : count++;break;
				case 'o' : count++;break;
				case 'u' : count++;break;
				default : other++;break;
			}

		}
	}
	cout << "元音单词有" << count << "个" << endl;
	cout << "辅音单词有" << other - 1 << "个" << endl;
	
	return 0;
}

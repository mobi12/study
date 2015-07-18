#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char ch;

	while (ch != '@')
	{	
		cin.get(ch);

		if (isalpha(ch))
		{
			if (islower(ch))
			{
				ch = toupper(ch);
				cout << ch;
			}
			else if (isupper(ch))
			{
				ch = tolower(ch);
				cout << ch;
			}
		}
	}
	
	cout << endl;
	return 0;
}

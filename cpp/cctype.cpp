#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	cout << "输入一段文字,以@结尾" << endl;
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;

	cin.get(ch);
	while (ch != '@')
	{
		if (isalpha(ch))
			chars++;
		else if (isspace(ch))
			whitespace++;
		else if (isdigit(ch))
			digits++;
		else if (ispunct(ch))
			punct++;
		else
			others++;
		cin.get(ch);
	}
	
	cout << chars << "letters,"
		<< whitespace << "whitespace"
		<< digits << " digits"
		<< punct << " punctuations"
		<< others << "others" << endl;

	return 0;
}

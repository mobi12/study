#include <iostream>
#include "string1.h"

const int ArSize = 10;
const int MaxLen = 81;

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	
	String name;
	cout << "Hi, what's your name?\n>>";
	cin >> name;

	cout << name << ", please enter up to " << ArSize
		<< " short sayings <empty line to quit>:\n";
	String sayings[ArSize];
	char temp[MaxLen];
	int i = 0;
	int shortest = 0;
	int first = 0;
	
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')
			break;
		else
			sayings[i] = temp;
	}
	
	int total = i;
	cout << "Here are your sayings:\n";
	for (i = 0; i < total; i++)
	{
		if (sayings[i].length() < sayings[shortest].length())
			shortest = i;
		if (sayings[i] < sayings[first])
			first = i;
	}
	
	cout << "Shortest saying:\n" << sayings[shortest] << endl;
	cout << "First alphabetically:\n" << sayings[first] << endl;
	cout << "This program used " << String::HowMany()
		<< " String objects. Bye.\n";
	
	return 0;
}
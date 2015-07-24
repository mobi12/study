#include <iostream>

using namespace std;

long double probability(unsigned numbers,unsigned picks);

int main()
{
	double total, choices;
	cout << "Enter the total number of choices on the game card and\n"
		"the number of picks allowed:\n";
	
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total,choices);
		cout << " of winning.\n";
		cout << "Next two numbers (q to quit)";
	}

	cout << "bye\n";
	return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	unsigned int p;
	long double n;

	for (p = picks, n = numbers; p > 0; n--, p--)
		
		result = result * n / p;
	
	return result;
}

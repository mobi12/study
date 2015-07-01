#include <iostream>

using namespace std;

int main()
{
	cout << "The amazing accounto will sum and average";
	cout << "five numbers for you" << endl;
	cout << "please enter five values:" << endl;

	double number;
	double sum = 0.0;

	for (int i = 1; i<=5; i++)
	{
		cout << "value " << i << ":";
		cin >> number;
		sum += number;
	}

	cout << "Five exauisite choices indeed! ";
	cout << "they sum to " << sum << endl;
	cout << "and average to " << sum / 5 << endl;
	cout << "The amazing accounto bids you adieu!" << endl;

	return 0;
}

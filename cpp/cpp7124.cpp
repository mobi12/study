#include <iostream>

using namespace std;

const double total1 = 47;
const double choices1 = 5;
const double total2 = 27;
const double choices2 = 1;

long double proba(unsigned numbers, unsigned picks);

int main()
{
	cout << "程序开始" << endl;

	cout << "普通号码中头奖的几率为：" << proba(total1, choices1) << endl;
	cout << "特殊号码中头奖的几率为: " << proba(total2, choices2) << endl;

	cout << "bye" << endl;

	return 0;
}

long double proba(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	unsigned int p;
	long double n;

	for (p = picks, n = numbers; p > 0; n--, p--)
		result = result * n / p;

	return result;
}

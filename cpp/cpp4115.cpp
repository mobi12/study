#include <iostream>
/*练习题4.11第7题*/
using namespace std;

struct CandyBar{
	char name[20];
	float kg;
	int kolo;
	};

int main()
{
	CandyBar snack = {
		"Mocha Munch",
		2.3,
		350
		};

	cout << snack.name << endl;
	cout << snack.kg << endl;
	cout << snack.kolo << endl;

	return 0;
}

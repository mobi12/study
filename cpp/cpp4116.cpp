#include <iostream>
/*练习题第6题*/

using namespace std;

struct CandyBar{
	char name[20];
	float kg;
	int kolo;
	};

int main()
{
	CandyBar snack[3] = {
		{"Mars",3.2,350},
		{"Munch",3.5,340},
		{"More",3.8,320}
	};

	cout << snack[0].name << endl;
	cout << snack[1].kg << endl;
	cout << snack[2].kolo << endl;

	return 0;
}	

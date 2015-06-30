#include <iostream>
#include <cstring>
/*练习题4.11第9题*/
using namespace std;

struct CandyBar{
	char name[20];
	float kg;
	int cal;
	};

int main()
{
	char n[20] = "Mars";
	CandyBar *snack = new CandyBar[3];
	strcpy(snack[0].name,n);
	cout << snack[0].name << endl;

	

	return 0;
}

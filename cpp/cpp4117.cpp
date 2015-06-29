#include <iostream>
#include <string>
/*编程练习4.11第7题*/
using namespace std;

struct company{
	string name;
	float zhi;
	float kg;
	};

int main()
{
	company pizza = {
		"Willian",
		4.5,
		3.2
		};
	
	cout << pizza.name << endl;
	cout << pizza.zhi << endl;
	cout << pizza.kg << endl;

	cout << "录入新的名称" << endl;
	cin >> pizza.name;
	cout << "录入新的直径" << endl;
	cin >> pizza.zhi;
	cout << "录入新的重量" << endl;
	cin >> pizza.kg;
		
	return 0;
}

#include <iostream>

using namespace std;
/*练习题4.11第8题*/

struct company{
	char name[20];
	float zhi;
	int kg;
	};

int main()
{
	company *pizza = new company;
	
	cout << "输入公司名字" << endl;
	cin >> (pizza -> name);
	cout << "输入直径" << endl;
	cin >> (pizza -> zhi);
	cout << "输入重量" << endl;
	cin >> (pizza -> kg);

	cout << (pizza -> name) << endl;
	cout << (pizza -> zhi) << endl;
	cout << (pizza -> kg) << endl;

	delete pizza;
	
	return 0;
}

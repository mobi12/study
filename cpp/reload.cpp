#include <iostream>
#include <string>

using namespace std;

int add(int x, int y);
double add(double x, double y);
string add(string one, string two);

int main()
{
	string first;
	string second;

	cin >> first >> second;
	cout << add(first, second) << endl;

	int a = 0;
	int b = 0;
	
	cout << "输入两个数字:";
	cin >> a >> b;
	cout << "a + b等于" << add(a, b) << endl;
	
	cout << "输入小数：";
	double x;
	double y;
	cin >> x >> y;
	cout << "x+y等于" << add(x, y) << endl;
	
	return 0;
}

int add(int x, int y)
{
	x = x + y;
	return x;
}

double add(double x, double y)
{
	x = x + y;
	return x;
}

string add(string one, string two)
{
	one = one + two;
	return one;
}

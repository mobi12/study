#include <iostream>
//输出矩形

int main()
{
	using namespace std;

	int num1 = 0;
	int num2 = 0;
	char x;
	cout << "输入一个字母" << endl;
	cin >> x;
	cout << "输入长和宽: ";
	cin >> num1;
	cin >> num2;

	for (int i = 0; i < num1; i++)
		cout << x ;
	cout << endl;
	for (int j = 0; j < num2 - 2; j++)
	{
		cout << x ;
		for (int k = 0; k < num1 - 2; k++)
			cout << " " ;
		cout << x << endl;
	}
	for (int l = 0; l < num1; l++)
		cout << x ;
	cout << endl;

	return 0;
}

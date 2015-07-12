#include <iostream>

using namespace std;

const int Year = 3;
const int Month = 12;

int main()
{
	int sale[Year][Month];
	int all = 0;
	int one = 0;
	int two = 0;
	int three = 0;

	cout << "输入第一年的值" << endl;
	for (int i = 0; i < 12; ++i)
	{
		cout << "输入" << i << "月销量："; 
		cin >> sale[0][i];
	}
	for (int x = 0; x < 12; ++x)
	{
		cout << x << "月销量为：" << (sale[0][x]) << "\t";
		one += sale[0][x];
	}
	cout << "\n输入第二年的值" << endl;
	for (int j = 0; j < 12; ++j)
	{
		cout << "输入" << j << "月销量：";
		cin >> sale[1][j];
	}
	for (int y = 0; y < 12; ++y)
	{	
		cout << y << "月销量为：" << (sale[1][y]) << "\t";
		two += sale[1][y];
	}
	cout << "\n输入第三年的值" << endl;
	for (int k = 0; k < 12; ++k)
	{
		cout << "输入" << k << "月销量:";
		cin >> sale[2][k];
	}
	for (int z = 0; z < 12; ++z)
	{
		cout << z << "月销量为" << (sale[2][z]) << "\t";
		three += sale[2][z];
	}

	all = one + two + three;
	cout << "总销量：" << all << endl;

	return 0;
}

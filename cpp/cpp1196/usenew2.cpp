#include <iostream>
#include "newstone2.h"

using namespace std;

const int Len = 6;

int main()
{
	Stonewt st[Len] = {
		Stonewt(11, 2.8),
		Stonewt(10, 3.0),
		Stonewt(11, 3.1)
	};
	Stonewt big;
	Stonewt little;
	int count = 0;

	for (int i = 3; i < Len; i++)
	{
		int num = 0;
		double num2 = 0.0;
		
		cout << "输入整数：";
		cin >> num;
		cout << "输入小数：";
		cin >> num2;
		st[i] = Stonewt(num, num2);
	}	
	
	//测试是否大于等于11
	Stonewt st2(11, 2.5);
	//大小测试
	for (int i = 0; i < Len; i++)
	{
		if (st[i] >= st2)
			count++;
	}
	
	for (int i = 0; i < Len; i++)
		if (st[i] > st[i + 1])
			big = st[i];
		else if (st[i] < st[i + 1])
			big = st[i + 1];
			
	for (int i = 0; i < Len; i++)
		if (st[i] < st[i + 1] && st[i] < st[i - 1])
			little = st[i];
	
	cout << "大于等于11英石的数量是：" << count << endl;
	cout << "最大的值：" << endl;
	big.show_lbs();
	big.show_stn();
	cout << "最小的值：" << endl;
	little.show_lbs();
	little.show_stn();
	
	return 0;
}
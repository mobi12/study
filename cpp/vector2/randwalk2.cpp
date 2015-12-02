#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector2.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	
	srand(time(0));
	int num = 0;
	int big = 0;
	int little = 0;
	int all = 0;
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	
	cout << "输入测试次数： ";
	cin >> num;
	int little1[num];
	for (int i = 0; i < num; i++)
	{	
		cout << "Enter target distance: ";
		cin >> target;
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.set(dstep, direction, 'p');
			result = result + step;
			steps++;
		}

		cout << steps << endl;
		all += steps;
		if (big < steps)
		{	
			big = steps;
			little = big;
		}
		
		little1[i] = steps;
		steps = 0;
		result.set(0.0, 0.0);
	}
	
	for (int j = 0; j < num; j++)
		for (int k = num; k > 0; k--)
			if (little1[j] < little1[k] && little < little1[k - 1])
				little = little1[j];
			else
				little = little1[k];
				
	cout << "平均数是： " << all / num << endl;
	cout << "最小数是： " << little << endl;
	cout << "最大数是： " << big << endl;
	cout << "Bye!\n";
	
	return 0;
}
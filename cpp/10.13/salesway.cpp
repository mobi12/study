#include <iostream>
#include "csales.h"

using namespace SALES;

Sales::Sales()
{
	for (int i = 0; i < QUARTERS; i++)
		sales[i] = 0.0;
	average = 0.0;
	max = 0.0;
	min = 0.0;
}

Sales & Sales::setSales(Sales & sa)
{
	using std::cout;
	using std::cin;

	cout << "输入4个: ";
	for (int i = 0; i < QUARTERS; i++)
		cin >> sales[i];
	for (int j = 0; j < QUARTERS; j++)
		average += sales[j];
	cout << "输入最高价格： ";
	cin >> max;
	cout << "输入最低价格： ";
	cin >> min;
	
	return *this;
}

void Sales::setSales(double num[], double num2, double num3)
{
	for (int i = 0; i < QUARTERS; i++)
		sales[i] = num[i];
	for (int j = 0; j < QUARTERS; j++)
		average += sales[j];
	max = num2;
	min = num3;
}

void Sales::showSales() const
{
	using std::cout;
	using std::endl;
	
	cout << "总数为：" << average << endl;
	cout << "和最大值相差: " << max - average << endl;
	cout << "和最小值相差: " << average - min << endl;
}
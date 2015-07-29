#include <iostream>

using namespace std;

double input(double x[]);
double averge(double z[], int n);
void score(double y[], int m);

const int ArSize = 10;

int main()
{
	int count = 0;
	double golf[ArSize];

	cout << "输入高尔夫成绩" << endl;
	count = input(golf);
	score(golf, count);
	cout << "成绩的平均值是" << averge(golf, count) << endl;

	return 0;
}

double input(double x[])
{
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << "输入第" << i + 1 << "个成绩：";
		if (!(cin >> x[i]))
			break;
	}
	return i;
}

double averge(double z[], int n)
{
	int allgolf;
	int total;
	for (int j = 0; j < n; j++)
		allgolf += z[j];
	total = allgolf / n;
	return total;
}

void score(double y[], int m)
{
	for (int k = 0; k < m; k++)
		cout << "高尔夫成绩#" << k + 1 << ":" << y[k] << endl;
}

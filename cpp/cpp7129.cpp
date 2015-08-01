#include <iostream>

using namespace std;

int cal(int a, int b,int (*pt[3])(int, int));
int add(int x, int y);
int product(int c, int d);
int low(int e, int f);
int (*pf[3])(int, int) = {add, product, low};

int main()
{
	int numone;
	int numtwo;

	cout << "输入两个数字：";
	cin >> numone >> numtwo;

	int end = cal(numone, numtwo, pf);

	cout << end << endl;
	
	return 0;
}

int cal(int a, int b, int (*pt[3])(int, int))
{
	int total;
	
	for (int i = 0; i < 3; i++)
		total = (*pt[i])(a, b);

	return total;
}

int add(int x, int y)
{
	return x + y;
}
int product(int c, int d)
{
	return c * d;
}
int low(int e, int f)
{
	return e - f;
}

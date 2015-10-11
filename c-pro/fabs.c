#include <stdio.h>
#include <math.h>

int main()
{
	double s, t, x;

	int n;
	printf("输入一个数");
	scanf("%lf", &x);
	t = x;
	n = 1;
	s = x;

	do
	{
		n += 2;
		t *= (-x * x) / ((float) (n) - 1) / (float) (n);

		s += t;
	} while(fabs (t) >= 1e-7);

	printf("\n sin(%f) = %lf\n", x, s);

	return 0;
}

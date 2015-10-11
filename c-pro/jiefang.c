#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
	float s;
	float x1, x2;

	printf("输入系数：");
	scanf("%f,%f,%f", &a, &b, &c);
	if (a == 0)
	{
		if (b != 0)
			x1 = x2 = -c / b;
		else if (c == 0)
			printf("方程无定根\n");
		else
			printf("方程无解\n");
	}
	else 
	{
		s = (b*b) - (4*a*c);
		if (s > 0)
		{
			s = sqrt(s);
			x1 = -0.5 * (b + s) / a;
			x2 = -0.5 * (b + s) / a;
		}
		else if (s == 0)
			x1 = x2 = -0.5 * b / a;
		else 
		{
			s = sqrt(s);
			
			x1 = -0.5 * b / a;
			x2 = fabs(0.5 * (-s) / a);
		}
	}

	printf("x1 = %lf\n", x1);
	printf("x2 = %lf\n", x2);
	return 0;
}

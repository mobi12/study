#include <stdio.h>
//求输入数字的幂(幂以输入为准),2的最大位数竟然是5
int main()
{
	double x = 0;
	int y = 0;
	int z = 0;

	scanf("%lf",&x);
	scanf("%d",&y);

	for(y>0;y>z;z++)
	{
		x=x*x;
		printf("%lf\n",x);
	}

	return 0;
}

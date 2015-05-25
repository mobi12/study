#include <stdio.h>
//fac.c的升级版,输入数字阶乘
int main()
{
	int a = 0;
	int x = 1;
	int b = 0;
	int c = 0;

	scanf("%d",&a);
	printf("输入想阶乘到几位\n");
	scanf("%d",&b);
	
	for(;b>c;c++)
	{
		a=a*x;
		x++;
	}
	printf("%d\n",a);

	return 0;
}

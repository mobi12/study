#include <stdio.h>
/*关于数组所有元素相乘的小程序*/
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int x = 0;
	int num1[10]={0,1,2,3,4,5,6,7,8,9};
	int num2[10]={0,11,22,33,44,55,66,77,88,99};
	
	for(c=0;c<10;c++)
	{
		x=(*(num1+a))*(*(num2+b));
		printf("%d\n",x);
		a++;
		b++;
	}
	
	return 0;
}

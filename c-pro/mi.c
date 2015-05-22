#include <stdio.h>
//实现了求x的n次方
//我真是太笨了
int main()
{
	int x=0;
	int y=0;
	int z;
	int count = 0;

	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&count);

	for(z=0;z<count;z++)
	{
		y=y*x;
		printf("%d\n",y);
	}

	return 0;
}

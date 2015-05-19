#include <stdio.h>

int main()
{
	int num[10]={
		1,2,3,4,5,6,7,8,9,10
	};
	int z = 0;
	int y = num[0];

	for(z=0;z<10;++z)	
		if(y<num[z])
		{
			y=num[z];
		}
		printf("%d\n",y);

	return 0;
}

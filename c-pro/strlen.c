#include <stdio.h>
#include <string.h>
//这个程序可以运行但是有个问题
int main()
{
	char str1[5];

	scanf ("%s",&str1);
	
	char str2[strlen(str1)];
	strcpy(str2,str1);
	printf("%s\n",str2);

	return 0;
}
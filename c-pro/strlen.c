#include <stdio.h>
#include <string.h>

int main()
{
	char str1[5];

	scanf ("%s",&str1);
	
	char str2[strlen(str1)];
	strcpy(str2,str1);
	printf("%s\n",str2);

	return 0;
}
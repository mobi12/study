#include <stdio.h>

int main()
{
	int x = 0;
	char y = 'a';

	for (x=0;x<26;x++)
	{
		printf("%c\n",y);
		y++;
	}

	return 0;
}
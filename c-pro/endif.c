#include <stdio.h>
#define B 5
#if B != 5 
int main()
{
	int x = 0;
	for (; x < 5; x++)
		printf("%d\n", x);
	return 0;
}
#endif
int main()
{
	int x = 0;
	for (; x < 5; x++){}
	printf("%d\n", x);

	return 0;
}

#include <stdio.h>
#define B 5
#if B == 5
void Print (int x)
{
	printf("%d\n", x);
}
#endif

int main()
{
	int x = 0;
	for (; x < 5; x++){}
	Print(x);

	return 0;
}

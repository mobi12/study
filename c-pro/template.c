#include <stdio.h>
#include <malloc.h>
#include <string.h>

void Swap(void * a, void * b, int size);

int main()
{
	int x = 25, y = 52;
	printf("%d %d\n", x, y);

	Swap(&x, &y, sizeof(int));
	printf("%d %d\n", x, y);

	return 0;
}

void Swap(void * a, void * b, int size)
{
	void * temp = malloc(size);
	memcpy(temp, a, size);
	memcpy(a, b, size);
	memcpy(b, temp, size);
}

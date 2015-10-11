#include <stdio.h>

int main()
{
	char a[10];
	char b;
	char c;

	scanf("%s", &a);
	getchar();
	printf("%s\n", a);

	scanf("%c,%*c", &b, &c);
	printf("%c%c\n", b, c);

	return 0;
}

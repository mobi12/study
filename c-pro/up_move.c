#include <stdio.h>

int main()
{
	int high = 11;
	int up = 3;
	int down = 1;
	int day = 0;

	while (high > 0)
	{
		high = (high - up) + down;
		day++;
		if (high < 3)
			break;
	}

	printf("蜗牛爬了%d天\n", day);

	return 0;
}

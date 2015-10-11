#include <stdio.h>
//scanf的用法
int main()
{
	char a[10];
	char b;
	char c;
	
	printf("输入字符串");
	scanf("%s", &a);
	printf("%s\n", a);
	getchar();

	printf("输入字符");
	scanf("%c,%*c", &b, &c);	//使用*号屏蔽输入
	printf("%c%c\n", b, c);
	getchar();

	printf("按格式输入字符");
	scanf("%c,%c", &b, &c);	//输入格式设置
	printf("%c%c\n", b, c);

	return 0;
}

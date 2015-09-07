#include <iostream>
#include <string>
//屌炸天的新方法--直接赋值（direct-initialization）
using namespace std;

int main()
{
	string x(3,'A');	//重复计数器次数次字符
	int way = 10,
	    way2(way + 1);	//还可以这样初始化

	cout << x << endl;

	return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand (static_cast <unsigned int> (time(0)));
	int b = rand();
	int c = (b%99)+1;
	int d;
	//主体
	cout << "下面来玩个游戏" << endl;
	cin.get();
	cout << "现在电脑生成了一个数" << endl;
	cin.get();
	cout << "不管它为啥生成" << endl;
	cin.get();
	cout << "亲，来猜猜是什么数字吧！" ;
	cin.get();
	while (c != d)
	{
		cin >> d;
		if (d > c)
		{
			cout << "比正确答案大了\n";
		}
		else if (d < c)
		{
			cout << "比正确答案小了\n";
		}
	}
	cout << "你猜对了，这个数字是\n" << c << endl;

	return 0;
}

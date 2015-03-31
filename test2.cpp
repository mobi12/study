#include <iostream>
//第二章的第二个练习题
//自定义函数
using namespace std;

void Three();
void See();

int main()
{
	Three();
	Three();
	See();
	See();
	return 0;
}

void Three()
{
	cout << "three three three" << endl;
}

void See()
{
	cout << "see see see" << endl;
}

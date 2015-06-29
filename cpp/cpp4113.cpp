#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char fname[8];
	char lname[8];	 

	cout << "输入你的姓氏" << endl;
	cin >> fname;
	cout << "输入你的名字" << endl;
	cin >> lname;

	strcat(fname,", ");
	strcat(fname,lname);

	cout << "你的名字是：" << fname << endl;
	
	return 0;
}

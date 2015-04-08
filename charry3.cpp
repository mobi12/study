#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	const int size=15;
	char name1[size];
	char name2[size]="cowboy";
	
	cout << "我的名字是" << name2[size] << endl;
	cout << "你的名字是？" << endl;
	cin >> name1[size];
	cout << "你的名字" << strlen(name1);
	cout << "米" << endl;
	
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	cout << "这个程序可以测试大小写" << endl;
	char ch;
	cin >> ch;
	
	if (ch == 'y' || ch == 'Y')
		cout << "你同意了\a\a\n";
	else if (ch == 'n' || ch == 'N')
		cout << "你不同意\a\a\n";
	else
		cout << "只能输入y或者n" << endl;

	return 0;

}

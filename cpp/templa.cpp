#include <iostream>
#include <string>

template <typename Any>
Any Add (Any &a, Any &b);

int main()
{
	using namespace std;

	string str1, str2;

	cout << "输入两个句子：";
	cin >> str1 >> str2;
	cout << "组合成一个句子：";
	cout << Add(str1, str2) << endl;

	int num1, num2;
	cout << "输入数字:" << endl;
	cin >> num1 >> num2;
	cout << "输出和：";
	cout << Add (num1, num2);

	return 0;
}

template <typename Any>
Any Add (Any &a, Any &b)
{
	a = a + b;

	return a;
}

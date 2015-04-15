#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string str1;
	cin >> str1;
	char str2[20];
	cin >> str2;
	int len1 = str1.size();
	int len2 = strlen(str2);

	cout << len1 << endl;
	cout << len2 << endl;

	return 0;
}

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string str1="oh";
	string str2="no";
	str1+=str2;
	char charry1[20]="yaha";
	char charry2[20];
	strcpy(charry2,charry1);
	strcat(charry2,charry1);

	cout << str1 << endl;
	cout << charry2 << endl;

	return 0;
}

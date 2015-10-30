#include <iostream>
#include <cstring>

using namespace std;

template <class T>
T maxn(T num[], int count)
{
	T max;
	for (int i = 0; i < (count - 1); i++)
	{
		if (num[i] < num[i + 1])
			max = num[i + 1];
		else if (num[i] > num[i + 1])
			max = num[i];
	}

	return max;
}

template <>
char* maxn(char *str[], int count)
{
	char *max;

	for (int i = 0; i < (count - 1); i++)
	{
		int one = strlen(str[i]);
		int two = strlen(str[i + 1]);

		if (one > two)
			max = str[i];
		else if (one < two)
			max = str[i + 1];
		else if (one == two)
		{	
			max = str[i];
			break;
		}
	}

	return max;
}

int main()
{
	int num1[6] = {1,2,3,4,8,7};
	cout << maxn(num1, 6) << endl;

	double num2[4] = {1.2,3.5,4.0,5.8};
	cout << maxn(num2, 4) << endl;

	char *str1[5] = {
		"blablabla", 
		"blabla", 
		"bababqqq", 
		"bab", 
		"sss"
	};

	cout << maxn(str1, 5) << endl;
	
	return 0;
}

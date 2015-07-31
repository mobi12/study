#include <iostream>

using namespace std;

const int ArSize = 10;

int fill_array(double ar[], int len);
void show_array(double ar[],int len);
void reverse_array(double ar[], int len);

int main()
{
	double num[ArSize];
	double num2[ArSize];
	int count = 0;

	count = fill_array(num, ArSize);
	show_array(num, count);

	reverse_array(num, count);
	show_array(num, count);

	cin.clear();
	cin.get();
	count = fill_array(num2, ArSize);
	reverse_array(num2 + 1, count - 2);
	show_array(num2, count);

	return 0;
}

int fill_array(double ar[], int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		cout << "输入数字#" << i + 1 << ": ";	
		if (!(cin >> ar[i]))
			break;
	}

	return i;
}

void show_array(double ar[], int len)
{
	cout << endl;
	for (int j = 0; j < len; j++)
		cout << "第" << j + 1 << "个数字是" << ar[j] << endl;
}

void reverse_array(double ar[], int len)
{
	double ar2[len];
	int count = len - 1;

	for (int k = 0; k < len; k++)
	{
		ar2[k] = ar[count];
		count--;
	}

	for (int x = 0; x < len; x++)
		ar[x] = ar2[x];
}

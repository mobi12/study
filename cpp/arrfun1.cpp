#include <iostream>

using namespace std;

int sum_arr(int arr[], int n);

const int ArSize = 8;

int main()
{
	int cookies[ArSize] = {1,2,3,4,5,6,7,8};

	int sum = sum_arr(cookies, ArSize);
	cout << "饼干总数为：" << sum << endl;

	return 0;
}

int sum_arr(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}

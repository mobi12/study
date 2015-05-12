//写一个函数计算最大值或最小值

#include <iostream>
#include "myfun.h"
using namespace std;
using namespace my;

int main()
{
	int arr [4] ={1,2,3,7};
	bool x =false;
	cin >> x;
	cout << getMax(arr,4,x) << endl;
	return 0;
}

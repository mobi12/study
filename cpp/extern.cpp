#include <iostream>
#include "myfun.h"
//使用extern在myfun.h里声明了一个常量
using namespace std;
using namespace smy;

int main()
{
	const double Pi = 3.1415926;
	int line = 3;

	double circle = line * Pi;

	cout << "周长等于" << circle << endl;

	return 0;
}

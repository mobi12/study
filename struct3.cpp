#include <iostream>

using namespace std;

struct park {
	int x;
	float y;
}mr;

int main()
{
	park mr = {1,2.5};    		//不指明使用的结构体名会出现警告
	cout << mr.x << endl;
	cout << mr.y << endl;

	return 0;
}

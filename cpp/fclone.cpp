#include <iostream>
#include <string>

using namespace std;

struct tclone
{
	string name;
	int num;
};

const tclone & clone(tclone & sysopref)
{//以后不要这么搞，今天只是写个实验
	tclone * pclone = new tclone;
	*pclone = sysopref;
	return *pclone;
}

int main()
{
	tclone str = {
		"mike",
		10
	};

	const tclone & jolly = clone(str);

	cout << jolly.name << endl;
	cout << jolly.num << endl;

	return 0;
}

//这里才应该放函数代码

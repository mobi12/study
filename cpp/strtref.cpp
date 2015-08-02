#include <iostream>

using namespace std;

struct sysop
{
	char name[26];
	char quote[26];
	int used;
};

const sysop & use(sysop & sysopref);

int main()
{
	sysop looper = {
		"Rick \"Fortran\" looper",
		"I'm a goto kind of guy",
		0
	};

	use(looper);
	cout << "Looper: " << looper.used << "use(s)" << endl;
	sysop copycat;
	copycat = use(looper);
	cout << "Looper: " << looper.used << " use(s)" << endl;
	cout << "Copycat: " << copycat.used << " use(s)" << endl;
	cout << "use(looper): " << use(looper).used << " use(s)" << endl;

	return 0;
}

const sysop & use(sysop & sysopref)
{
	cout << sysopref.name << "says:" << endl;
	cout << sysopref.quote << endl;
	sysopref.used++;

	return sysopref;
}

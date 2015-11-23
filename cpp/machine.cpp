#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char a,b,c,d,e;
    ofstream out;
    out.open("char.txt");

	a = 'a';
	b = 'b';
	c = 'c';
	d = 'd';
	e = 'e';

	while (a != 'z' && b != 'z')
	{
		cout << a++ << b++ << c++ << d++ << e++ << endl;
	    out << a << b << c << d << e << endl;
    }

	return 0;
}

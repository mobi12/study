#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string ch;
	ofstream out;

	out.open("file.txt");

	for (int i = 0; i < 5; i++)
	{
		getline(cin,ch);
		out << ch << endl;
	}
	
	out.close();

	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	long int daphne = 100;
	long int cleo = 100;
	int count = 0;

	do 
	{
		daphne = daphne * 10;
		cleo = (cleo * 0.05) + cleo;
		count++;
	}while (daphne > cleo);

	cout << count << "年后，cleo超过了daphne" << endl;
	cout << daphne << "美元" << endl;
	cout << cleo << "美元" << endl;

	return 0;
}

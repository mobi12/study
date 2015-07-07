#include <iostream>

using namespace std;

const int Cities = 5;
const int Years = 4;

int main()
{
	const char * cities[Cities] =
	{
		"成都",
		"长春",
		"天津",
		"上海",
		"北京"
	};

	int maxtemps[Years][Cities] = 
	{
		{95,99,86,100,104},
		{95,97,90,106,102},
		{96,100,940,107,105},
		{97,102,89,108,104}
	};

	cout << "最大从2002-2005" << endl << endl;
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ": \t";
		for (int year = 0; year < Years; ++year)
			cout << maxtemps[year][city] << "\t";
		cout << endl;
	}

	return 0;
}

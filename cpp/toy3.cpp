#include <iostream>
#include <ctime>

int main()
{
	using namespace std;

	for (int i = 0; i < 5;i++)
	{
		clock_t time = 0.9 * CLOCKS_PER_SEC;
		clock_t start = clock();
		while(clock() - start < time)
		;
			cout << "yeah!!" << endl;
	}

	return 0;
}

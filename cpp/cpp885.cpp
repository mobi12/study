#include <iostream>

using namespace std;

template <class T>
T Max(T num[])
{
	T max = num[0];

	for (int i = 0; i < 4; i++)
	{
		cout << max << endl;
		if (max < num[i + 1])
			max = num[i + 1];
		else if (max > num[i + 1])
			max = num[i];
	}

	return max;
}

int main()
{
	int num[5] = {1,2,3,8,9};
	int max = Max(num);

	cout << "最大的数是" << max << endl;

	double fnum[5] = {1.2,2.4,5.3,6.2,5.2};
	double fmax = Max(fnum);
	
	cout << "最大的数是" << fmax << endl;

	return 0;
}

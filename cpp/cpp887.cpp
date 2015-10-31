#include <iostream>

template<typename T>
void ShowArray(T arr[], int n);

template<typename T>
void ShowArray(T *arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main()
{
	using namespace std;
	int things[6] = {13, 31, 103, 310, 130};
	struct debts mr_E[3] = 
	{
		{"Ima wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};

	double * pd[3];

	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "Listing Mr. E's counts of things:\n";

	ShowArray(things, 6);
	cout << "Listing Mr. E's debts:\n";
	ShowArray(pd, 3);

	return 0;
}

template<typename T>
void ShowArray(T arr[], int n)
{
	using namespace std;
	T all;
	cout << "template A\n";
	for (int i = 0; i < n; i++)
		all += arr[i];
	cout << all << endl;
}

template<typename T>
void ShowArray(T *arr[], int n)
{
	using namespace std;
	T all;
	cout << "template B\n";
	for (int i = 0; i < n; i++)
		all += *arr[i];	
	cout << all << endl;
}

#include <iostream>

using namespace std;

const int Max = 5;

int fill_arry(double ar[], int limit);
void show_arry(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main()
{
	double properties[Max];

	int size = fill_arry(properties, Max);
	show_arry(properties,size);
	cout << "Enter revaluation factor: ";
	
	double factor;
	cin >> factor;
	revalue(factor, properties, size);
	show_arry(properties,size);
	
	cout << "Done!" << endl;

	return 0;
}

int fill_arry(double ar[], int limit)
{
	double temp;
	int i;

	for (i = 0; i < limit; i++)
	{
		cout << "Enter value#" << (i + 1) << ": ";
		cin >> temp;

		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input;input process terminated.\n";
			break;
		}

		else if (temp < 0)
			break;
		ar[i] = temp;
	}

	return i;
}

void show_arry(const double ar[], int n)
{
	for (int j = 0; j < n; j++)
	{	
		cout << "properties#" << (j + 1) << ": ";
		cout << ar[j] << endl;
	}
}

void revalue(double r, double ar[], int n)
{
	for (int k = 0; k < n; k++)
		ar[k] *= r;
}

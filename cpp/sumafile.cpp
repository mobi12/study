#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

using namespace std;

int main()
{
	char filename[SIZE];
	ifstream inFile;
	ofstream out; 
	
	cout << "Enter name of data file: ";
	cin.getline(filename,SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		exit(EXIT_FAILURE);
	}

	double value;
	double sum = 0.0;
	int count = 0;

	inFile >> value;

	while (inFile.good())
	{
		++count;
		sum += value;
		inFile >> value;
	}

	if (inFile.eof())
		cout << "End of file reached" << endl;
	else if (inFile.fail())
		cout << "Input terminated by data mismatch" << endl;
	else
		cout << "Input terminated for unknown reason" << endl;
	if (count == 0)
	{
		cout << "No data processed" << endl;
	}
	else 
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	
	out.open("output.txt");
	out << count << endl;
	out << sum << endl;
	out << sum / count << endl;

	ifstream infile;
	infile.open("output.txt");

	while (infile.good())
	{
		double ship = 0.0;
		infile >> ship;
		cout << ship << endl;
	}

	inFile.close();
	out.close();

	return 0;
}

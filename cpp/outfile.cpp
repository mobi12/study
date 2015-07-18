#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char automobile[50];
	int year;
	double a_price;
	double b_price;

	ofstream outfile;
	outfile.open("test.txt");

	cout << "输入一些东西：";
	cin.getline(automobile,50);
	cout << "输入年份：";
	cin >> year;
	cout << "输入价格：";
	cin >> a_price;
	b_price = 0.913 * a_price;

	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "make and model: " << automobile << endl;
	cout << "year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << b_price << endl;

	outfile << fixed;
	outfile.precision(2);
	outfile.setf(ios_base::showpoint);
	outfile << "Make and model: " << automobile << endl;
	outfile << "Year: " << year << endl;
	outfile << "Was asking $" << a_price << endl;
	outfile << "Now asking $" << b_price << endl;

	outfile.close();

	return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "vector.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;

    ofstream out;
    out.open("randwalk.txt");
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	int count = -1;
	double target;
	double dstep;

	cout << "Enter target distance (q to quit): ";

	while (cin >> target)
	{
		cout << "Enter step length: ";

		if (!(cin >> dstep) && !out.is_open())
			break;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.set(dstep, direction, 'p');
			result = result + step;
			steps++;
		}

		count++;
		cout << "After " << steps << " steps, the subject"
			<< "has the following location: " << endl;
		out << count << " : " << result << endl;
		result.polar_mode();
		cout << " or\n" << result << endl;
		out << " or\n" << result << endl;
		cout << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		out << "Average outward distance per step = "
			<< result.magval() /steps << endl;
		steps = 0;
		result.set(0.0, 0.0);	
		cout << "Enter target distance (q to quit): ";
	}

    out.close();
	cout << "Bye !" << endl;

	return 0;
}

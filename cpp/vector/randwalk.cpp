#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main()
{
	using namespace std;
	using VECTOR::Vector;
	
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	
	cout << "Enter target distance (q to quit): ";
	
	while (cin >> target)
	{
		cout << "Enter step length: ";
		
		if (!(cin >> dstep))
			break;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.set(dstep, direction, 'p');
			result = result + step;
			steps++;
		}
		
		cout << "After " << steps << " steps, the subject"
			<< "has the following location: " << endl;
		cout << result << endl;
		result.polar_mode();
		cout << " or\n" << result << endl;
		cout << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.set(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}
	
	cout << "Bye !" << endl;
	
	return 0;
}
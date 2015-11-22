#include <iostream>
#include "move.h"

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	using std::cout;
	using std::endl;
	using std::ios_base;
	
	cout.precision(2);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
	cout << "x:" << x << endl;
	cout << "y:" << y << endl;
}

Move Move::add(const Move & m) const
{
	Move n;
	n.x = m.x + x;
	n.y = m.y + y;
	
	return n;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
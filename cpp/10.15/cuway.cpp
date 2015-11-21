#include <iostream>
#include <cstring>
#include "cutomer.h"

Stack::Stack()
{
	a = 0;
}

bool Stack::isempty() const
{
	if (a == 0)
		return true;
}

bool Stack::isfull() const
{
	if (a == MAX)
		return true;
}

bool Stack::push(const customer & bet)
{
	if (a < MAX)
	{
		bit[a++] = bet;
		return true;
	}
	else 
		return false;
}

bool Stack::pop(customer & bet)
{	
	if (a > 0)
	{
		bet = bit[--a];
		average += bet.payment;
		return true;
	}
	else
		return false;
}

void Stack::show() const
{
	using std::cout;
	using std::endl;
	
	cout << "总数为： ";
	cout << average << endl;
}
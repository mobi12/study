#include <iostream>
#include "list.h"

List::List()
{
	now = 0;
}

bool List::isfull() const
{
	if (now == 5)
		return true;
}

bool List::isempty() const
{
	if (now < 5)
		return true;
}

void List::push(int number)
{
	num[now++] = number;
}

void List::visit(void (*pf)(int number[]))
{
	pf(num);
}
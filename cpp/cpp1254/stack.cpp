#include "stack.h"
#include <iostream>

Stack::Stack(int n)
{
	if (n > MAX)
		pitems = new Item[MAX];
	pitems = new Item[n];
	size = 0;
	top = 0;
}

Stack::Stack(const Stack & st)
{	
	pitems = new Item[st.size];
	for (int i = 0; i < st.size; i++)
		pitems[i] = st.pitems[i];
	size = st.size;
	top = st.top;
}

Stack::~Stack()
{
	delete [] pitems;
}

bool Stack::isempty() const
{
	if (pitems[top] == 0)
		return true;
	else
		return false;
}

bool Stack::isfull() const
{
	if (pitems[top - 1] != 0)
		return true;
	else
		return false;
}

bool Stack::push(const Item & item)
{
	pitems[top] = item;
	top++;
	size++;
	
	return true;
}

bool Stack::pop(Item & item)
{
	item = pitems[top - 1];
	pitems[top - 1] = 0;
	top--;
	size--;
	
	return true;
}

Stack & Stack::operator =(const Stack & st)
{
	if (this == &st)
		return *this;
	delete [] pitems;
	pitems = new Item[st.size];
	for (int i = 0; i < st.size; i++)
		pitems[i] = st.pitems[i];
	size = st.size;
	top = st.top;
	
	return *this;
}
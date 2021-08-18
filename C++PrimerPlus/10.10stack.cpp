// stack.cpp -- Stack member functions
#include "10.10stack.h"

Stack::Stack(int n)
{
	size = n;
	pitems = new Item[size];
	top = 0;
}
Stack::Stack(const Stack & s)
{
	size = s.size;
	pitems = new Item[size];
	for (int i = 0; i < s.top; i++)
		pitems[i] = s.pitems[i];
	top = s.top;
}
Stack::~Stack()
{
	delete[] pitems;
}
bool Stack::isempty() const
{
	return top == 0;
}
bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item & item)
{
	if (top < MAX)
	{
		pitems[top++] = item;
		return true;
	}
	else
		return false;
}
bool Stack::pop(Item & item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
		return false;
}
Stack & Stack::operator=(const Stack & s)
{
	if (this == &s)
		return *this;
	size = s.size;
	top = s.top;
	pitems = new Item[size];
	for (int i = 0; i < s.top; i++)
		pitems[i] = s.pitems[i];
	return *this;
}
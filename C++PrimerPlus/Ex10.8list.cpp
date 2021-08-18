#include "Ex10.8lish.h"

bool List::isEmpty() const
{
	return top == 0;
}
bool List::isFull() const
{
	return top == LEN;
}
void List::addData(Item n)
{
	//if (top < LEN)
	if(!isFull())
		array[top++] = n;
	else
		cout << "List is full!\n";
}
void List::visit(void(*pf) (Item & n))
{
	for (int i = 0; i < top; i++)
		pf(array[i]);
}
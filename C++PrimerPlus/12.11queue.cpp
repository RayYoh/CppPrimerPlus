#include "12.10queue.h"
#include <cstdlib>

//Queue methods
Queue::Queue(int qs) :qsize(qs)
{
	front = rear = NULL;
	items = 0;
}
Queue::~Queue()
{
	Node * temp;
	while (front!=NULL)	// while queue is not yet empty
	{
		temp = front;	// save address of front item
		front = front->next;	// reset pointer to next item
		delete temp;
	}
}

bool Queue::isempty() const
{
	return items == 0;
}
bool Queue::isfull() const
{
	return items == qsize;
}

int Queue::queuecount()const
{
	return items;
}

//Add item to queue
bool Queue::enqueue(const Item & item)
{
	if (isfull())
		return false;
	Node * add = new Node;
	add->item = item;
	add->next = NULL;
	items++;
	if (front == NULL)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}
// Place front item into item variable and remove from queue
bool Queue::dequeue(Item & item)
{
	if (front == NULL)
		return false;
	item = front->item;
	items--;
	Node * temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = NULL;
	return true;
}
// time set to a random value in the range 1 - 3
void Customer::set(long when)
{
	processtime = std::rand() % 3 + 1;
	arrive = when;
}
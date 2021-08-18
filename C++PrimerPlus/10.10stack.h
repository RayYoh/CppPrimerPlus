// stack.h -- class definition for the stack ADT
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class  Stack
{
public:
	 Stack(int n = MAX);
	 Stack(const Stack & st);
	 ~Stack();
	 bool isempty() const;
	 bool isfull() const;
	 //push() returns false it stack already is full, true otherwise
	 bool push(const Item & itm);
	 //pop() returns false if stack already is empty, true otherwise
	 bool pop(Item & item);
	 Stack & operator=(const Stack & st);

private:
	enum {MAX = 10};
	Item * pitems;
	int size;
	int top;
};
#endif // !10.10STACK_H_

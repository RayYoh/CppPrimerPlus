struct customer
{
	char fullName[35];
	double payment;
};

typedef customer Item;

class Stack
{
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	//push() returns false it stack already is full, true otherwise
	bool push(const Item & itm);
	//pop() returns false if stack already is empty, true otherwise
	bool pop(Item & item);

private:
	enum { MAX = 10 };
	Item items[MAX];
	int top;

};
class Customer
{
private:
	long arrive;
	int processtime;
public:
	Customer() { arrive = processtime = 0; }
	void set(long when);
	long when() const { return arrive; }
	long ptime() const { return processtime; }
};
typedef Customer Item;
class Queue
{
private:
	struct Node
	{
		Item item;
		struct Node * next;
	};
	enum { Q_SIZE = 10 };

	Node * front;
	Node * rear;
	int items; // current number of items in Queue
	const int qsize; //maximum number of items in Queue
	// preemptive definitions to prevent public copying
	Queue(const Queue & q):qsize(0){}
	Queue & operator=(const Queue & q) { return *this; }
public:
	Queue(int qs = Q_SIZE);	//create queue with a qs limit
	~Queue();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item &item);	// add item to end
	bool dequeue(Item &item);	//remove item from front
};
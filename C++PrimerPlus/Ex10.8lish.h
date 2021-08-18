#include<iostream>
using namespace std;
typedef int Item;
class List
{
private:
	static const int LEN = 5;
	Item array[LEN];
	int top;
public:
	List() { top = 0; }
	void addData(Item n);
	bool isFull() const;
	bool isEmpty() const;
	void visit(void(*pf) (Item &n));
};
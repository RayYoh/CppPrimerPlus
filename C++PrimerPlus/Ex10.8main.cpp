#include<iostream>
#include "Ex10.8lish.h"
using namespace std;
void fun(Item &n);
int main()
{
	List list;
	Item temp;
	cout << "Enter a number: \n";
	while (cin>>temp)
	{
		if (list.isFull())
		{
			cout << "List is already full!!!\n";
			break;
		}
		
		else
		{
			list.addData(temp);
			cout << "Enter a number: \n";
		}
		if (list.isFull())
			break;
	}
	list.visit(fun);
	return 0;
}
void fun(Item &n)
{
	cout << n << endl;
}
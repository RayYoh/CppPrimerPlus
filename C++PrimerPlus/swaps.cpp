#include<iostream>
using namespace std;
void swapr(int & a, int & b);
void swapp(int * a, int * b);
void swapv(int a, int b);
int main()
{
	int wallet1 = 300;
	int wallet2 = 350;
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Using references to swap contents:\n";
	swapr(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Using pointers to swap contents:\n";
	swapp(&wallet1, &wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;

	cout << "Trying to use passing by values:\n";
	swapv(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;
	return 0;
}
void swapr(int & a, int & b)
{
	int temp = b;
	b = a;
	a = temp;
}
void swapp(int * a, int * b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
void swapv(int a, int b)
{
	int temp = b;
	b = a;
	a = temp;
}
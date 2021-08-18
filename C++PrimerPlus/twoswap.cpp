#include<iostream>
using namespace std;
template<typename T>
void Swap(T &a, T &b);
struct job
{
	char name[40];
	double salary;
	int floor;
};
template<> void Swap<job>(job &a, job &b);
void Show(job &a);
int main()
{
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	Swap(i, j);
	cout << "Now i, j = " << i << ", " << j << ".\n";

	job sue = { "Susan Yaffee",73000.60,7 };
	job sidney = { "Sidney Taffee",78060.72,9 };
	cout << "Before job swapping:\n";
	Show(sue);
	Show(sidney);
	Swap(sue, sidney);
	cout << "After job seapping:\n";
	Show(sue);
	Show(sidney);
	return 0;
	return 0;
}
template<typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
template<> void Swap<job>(job &a, job &b)
{
	double tempSal;
	int tempFloor;
	tempSal = a.salary;
	a.salary = b.salary;
	b.salary = tempSal;
	tempFloor = a.floor;
	a.floor = b.floor;
	b.floor = tempFloor;
}
void Show(job &a)
{
	cout << a.name << ": $" << a.salary
		<< " on floor " << a.floor << endl;
}
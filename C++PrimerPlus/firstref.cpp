#include<iostream>
using namespace std;
int main()
{
	int rats = 101;
	int * pt = &rats;
	int & rodents = *pt;
	cout << "rats = " << rats;
	cout << ",rodents = " << rodents;
	cout << ", *pt = " << *pt << endl;
	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;
	int bennies = 50;
	pt = &bennies;
	cout << "rats = " << rats;
	cout << ",rodents = " << rodents;
	cout << ", *pt = " << *pt << endl;
	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;
	return 0;
}
#include<iostream>
#include"Ex9.4sales.h"
using namespace std;

int main()
{
	using namespace SALES;
	double ar[4] = { 1,2,3,4 };
	Sales one(ar,4), two;
	two.setSales();
	one.showSales();
	two.showSales();
	return 0;
}
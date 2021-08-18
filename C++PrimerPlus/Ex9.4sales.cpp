#include<iostream>
#include<string>
#include"Ex9.4sales.h"
using namespace std;

namespace SALES
{
	Sales::Sales(const double ar[], int n)
	{
		int num = QUARTERS;
		double total = 0;
		if (n < 0)
			cout << "Error!\n";
		else if (n < 4)
			num = n;
		double max = ar[0], min = ar[0];
		for (int i = 0; i < num; i++)
		{
			sales[i] = ar[i];
			total += ar[i];
			max = ar[i] > max ? ar[i] : max;
			min = ar[i] < min ? ar[i] : min;
		}
		average = total / num;
	}
	Sales::Sales()
	{
		for (int i = 0; i < QUARTERS; i++)
			sales[i] = 0.;
		average = 0.;
		min = 0.;
		max = 0.;
	}
	void Sales::setSales()
	{
		int n;
		cout << "Enter the number: ";
		cin >> n;
		double *ar = new double[n];
		cout << "Enter the sales:\n";
		for (int i = 0; i < n; i++)
		{
			cout << "No. " << i + 1 << ": ";
			cin >> ar[i];
			//cout << endl;
		}
		*this = Sales(ar, n);
	}
	void Sales::showSales()
	{
		cout << "Sales: ";
		for (int i = 0; i < QUARTERS; i++)
			cout << sales[i] << " ";
		cout << endl;
		cout << "Average: " << average << endl;
		cout << "Max: " << max << endl;
		cout << "Min: " << min << endl;
	}
}
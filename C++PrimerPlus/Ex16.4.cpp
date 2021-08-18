#include<iostream>
#include<algorithm>
using namespace std;

int reduce(long ar[], int n);
int main()
{
	long ar[10] = { 11, 3, 5, 9, 7, 4, 3, 5, 11, 3 };
	cout << "The raw data: ";
	for (int i = 0; i < 10; i++)
		cout << ar[i] << " ";
	cout << endl;
	int n = reduce(ar, 10);
	for (int i = 0; i < n; i++)
		cout << ar[i] << " ";
	cout << endl;

	return 0;
}
int reduce(long ar[], int n)
{
	sort(ar, ar + n);
	long * p = unique(ar, ar + n);
	return (int)(p - ar);
}
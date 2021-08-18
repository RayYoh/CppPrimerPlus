#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
	int n;
	cout << "Please one int number: ";
	while (cin >> n && n >= 0)
	{
		cout << n << "! = " << factorial(n) << endl;
		cout << "Please one int number: ";
	}
		
	return 0;
}
int factorial(int n)
{
	int result = 1;
	if (n == 0)
		return 1;
	else
	{
		result = n * factorial(n - 1);
		return result;
	}
}
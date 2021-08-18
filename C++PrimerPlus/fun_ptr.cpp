#include<iostream>
using namespace std;
double desty(int);
double pam(int);

void estimate(int line, double(*pf)(int));
int main()
{
	int code;
	cout << "How many lines of code do you need? ";
	cin >> code;
	cout << "Here is Desty's estimate:\n";
	estimate(code, desty);
	cout << "Here is Pam's estimate:\n";
	estimate(code, pam);
	return 0;
}
double desty(int ins)
{
	return 0.05*ins;
}
double pam(int ins)
{
	return 0.03*ins + 0.004*ins*ins;
}

void estimate(int line, double(*pf)(int))
{
	cout << line << " lines will teke ";
	cout << (*pf)(line) << " hours\n";
}
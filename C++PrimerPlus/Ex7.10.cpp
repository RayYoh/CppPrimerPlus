#include<iostream>
using namespace std;

double calculate(double x, double y, double(*p)(double a, double b));
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);
int main()
{
	double a, b;
	double(*pf[4])(double a, double b);
	pf[0] = add;
	pf[1] = subtract;
	pf[2] = multiply;
	pf[3] = divide;

	cout << "Enter two numbers: (q to quit)" << endl;
	while (cin >> a >> b)
	{
		for (int i = 0; i < 4; i++)
			cout << "The answer is: " << (*pf[i])(a, b) << endl;
		cout<<"Calculate: "<<calculate(a, b, add);
	}
	cout << "Done!" << endl;
	return 0;
}

//函数原型，加减乘除 
double calculate(double x, double y, double(*p)(double a, double b))
{
	return (*p)(x, y);
}


double add(double x, double y)
{
	return x + y;
}

double subtract(double x, double y)
{
	return x - y;
}

double multiply(double x, double y)
{
	return x * y;
}

double divide(double x, double y)
{
	return x / y;
}
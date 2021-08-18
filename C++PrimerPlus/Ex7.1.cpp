#include<iostream>
using namespace std;
double average(double, double);
int main()
{
	double x, y;
	cout << "Please input two numbers: ";
	while ((cin>>x>>y)&&(x&&y))
	{
		cout << "调和平均数为：" << average(x, y) << endl;
	}
	return 0;
}
double average(double x, double y)
{
	return 2.0*x*y / (x + y);
}